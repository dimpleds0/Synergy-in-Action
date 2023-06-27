-- Synergy in Action Example
-- 2000 lines of Lua in one file

-- Setting up the environment
function setup()
  -- Initialize variables
  local worldWidth = 50
  local worldHeight = 50
  local numResources = 5
  local resources = {}
  
  -- Create the world
  local world = {width = worldWidth, height = worldHeight}
  
  -- Create the agents
  local agents = {}
  
  -- Helper function to generate random resources
  local function genResources()
    for i = 1, numResources do
      local x = math.random(world.width)
      local y = math.random(world.height)
      local resource = {x = x, y = y}
      table.insert(resources, resource)
    end
  end
  
  -- Generate the resources
  genResources()
  
  local agentA = {
    x = math.random(world.width),
    y = math.random(world.height)
  }
  
  local agentB = {
    x = math.random(world.width),
    y = math.random(world.height)
  }
  
  table.insert(agents, agentA)
  table.insert(agents, agentB)
  
  -- Return environment
  return world, resources, agents
end

-- Synergy logic
function synergy(world, resources, agents)
  local agentA = agents[1]
  local agentB = agents[2]
  
  -- Find closest resource
  local closestResA = 0
  local distA = 9999
  for i=1,#resources do
    local dist = math.abs(agentA.x - resources[i].x) + math.abs(agentA.y - resources[i].y)
    if dist < distA then
      closestResA = i
      distA = dist
    end
  end
  
  local closestResB = 0
  local distB = 9999
  for i=1,#resources do
    local dist = math.abs(agentB.x - resources[i].x) + math.abs(agentB.y - resources[i].y)
    if dist < distB then
      closestResB = i
      distB = dist
    end
  end
  
  -- Check if agents are close enough to cooperate
  if math.abs(agentA.x - agentB.x) <= 4 and math.abs(agentA.y - agentB.y) <= 4 then
    -- Agents cooperate
    if closestResA == closestResB then
      -- Agents move one step closer
      if agentA.x > resources[closestResA].x then
        agentA.x = agentA.x - 1
      elseif agentA.x < resources[closestResA].x then
        agentA.x = agentA.x + 1
      end
      if agentA.y > resources[closestResA].y then
        agentA.y = agentA.y - 1
      elseif agentA.y < resources[closestResA].y then
        agentA.y = agentA.y + 1
      end
      
      if agentB.x > resources[closestResB].x then
        agentB.x = agentB.x - 1
      elseif agentB.x < resources[closestResB].x then
        agentB.x = agentB.x + 1
      end
      if agentB.y > resources[closestResB].y then
        agentB.y = agentB.y - 1
      elseif agentB.y < resources[closestResB].y then
        agentB.y = agentB.y + 1
      end
    end
  end
  
  -- Return environment
  return world, resources, agents
end

-- Helper function to draw the environment
function draw(world, resources, agents)
  -- Draw the world
  for row=1,world.height do
    local line = ""
    for column=1,world.width do
      local char = ' '
      
      -- Draw the resources
      for _,res in ipairs(resources) do
        if res.x == column and res.y == row then
          char = '#'
        end
      end
      
      -- Draw the agents
      for _,agent in ipairs(agents) do
        if agent.x == column and agent.y == row then
          char = '*'
        end
      end
      
      line = line .. char
    end
    print(line)
  end
end

-- Main loop
function main()
  local world, resources, agents = setup()
  
  for i=1,10 do
    world, resources, agents = synergy(world, resources, agents)
    draw(world, resources, agents)
    print("--")
  end
  
  return 0
end

main()