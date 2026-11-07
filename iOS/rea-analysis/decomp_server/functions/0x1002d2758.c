// rea decompile_all
// name: FUN_1002d2758
// address: 0x1002d2758
// body: available
// range: 0x1002d2758-0x1002d2ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d2758(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *local_b8 [3];
  undefined *local_a0;
  undefined **ppuStack_98;
  undefined *local_90 [3];
  undefined *local_78;
  undefined **ppuStack_70;
  long local_58;
  
  FUN_10007f314(param_1 + 0x118,local_b8,&DAT_100a83d18,0x1008188a0);
  if (local_a0 == (undefined *)0x0) {
    FUN_100040bb4(local_b8,&DAT_100a83d18,0x1008188a0);
    puVar4 = &DAT_100a83308;
    FUN_100004bb4(&DAT_100a83308,&DAT_100817810);
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    FUN_1000b142c(param_2,puVar4 + 0x20);
    puVar5 = (undefined *)0x0;
    FUN_10034269c();
    puVar6 = puVar5;
    _swift_allocObject();
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_100340b88(PTR___swiftEmptyArrayStorage_100995ea0);
    local_90[0] = puVar2;
    FUN_1002c5a14();
    *(undefined **)(puVar6 + 0x10) = local_90[0];
    FUN_100340bac(puVar2);
    local_90[0] = puVar4;
    FUN_1002c59f8();
    *(undefined **)(puVar6 + 0x18) = local_90[0];
    ppuStack_70 = &PTR_PTR_1009b3648;
    ppuVar7 = local_90;
    local_90[0] = puVar6;
    local_78 = puVar5;
  }
  else {
    FUN_1000a0074(local_b8,local_90);
    FUN_1000b142c(local_90,local_b8);
    puVar4 = &DAT_100a84260;
    FUN_100004bb4(&DAT_100a84260,&DAT_10081b1f0);
    puVar2 = (undefined *)0x0;
    FUN_10034269c();
    plVar3 = &local_58;
    _swift_dynamicCast(plVar3,local_b8,puVar4,puVar2,6);
    local_a0 = puVar2;
    if (((ulong)plVar3 & 1) == 0) {
      puVar4 = &DAT_100a83308;
      FUN_100004bb4(&DAT_100a83308,&DAT_100817810);
      _swift_allocObject();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      FUN_1000b142c(param_2,puVar4 + 0x20);
      puVar6 = &DAT_100a84268;
      FUN_100004bb4(&DAT_100a84268,&TargetResilientWitness_100818b50);
      _swift_initStackObject();
      *(undefined8 *)(puVar6 + 0x18) = 2;
      *(undefined8 *)(puVar6 + 0x10) = 1;
      FUN_1000b142c(local_90,puVar6 + 0x20);
      _swift_allocObject(puVar2,0x20,7);
      FUN_100340b88(puVar6);
      local_b8[0] = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1002c5a14();
      *(undefined **)(puVar2 + 0x10) = local_b8[0];
      puVar5 = puVar6;
      FUN_100340bac(puVar6);
      _swift_setDeallocating(puVar6);
      FUN_10003f094(puVar6 + 0x20);
      local_b8[0] = puVar4;
      FUN_1002c59f8(puVar5);
      *(undefined **)(puVar2 + 0x18) = local_b8[0];
      ppuStack_98 = &PTR_PTR_1009b3648;
    }
    else {
      puVar6 = *(undefined **)(local_58 + 0x10);
      uVar1 = *(undefined8 *)(local_58 + 0x18);
      puVar4 = &DAT_100a83308;
      FUN_100004bb4(&DAT_100a83308,&DAT_100817810);
      _swift_initStackObject();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      FUN_1000b142c(param_2,puVar4 + 0x20);
      _swift_bridgeObjectRetain(puVar6);
      _swift_bridgeObjectRetain(uVar1);
      FUN_1002c59f8(puVar4);
      _swift_allocObject(puVar2,0x20,7);
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_100340b88(PTR___swiftEmptyArrayStorage_100995ea0);
      local_b8[0] = puVar6;
      FUN_1002c5a14();
      *(undefined **)(puVar2 + 0x10) = local_b8[0];
      FUN_100340bac(puVar4);
      FUN_1002c59f8();
      *(undefined8 *)(puVar2 + 0x18) = uVar1;
      ppuStack_98 = &PTR_PTR_1009b3648;
      _swift_release(local_58);
    }
    local_b8[0] = puVar2;
    FUN_10003f094(local_90);
    ppuVar7 = local_b8;
  }
  FUN_100128b30(ppuVar7,param_1 + 0x118,&DAT_100a83d18,0x1008188a0);
  return;
}

