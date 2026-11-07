// rea decompile_all
// name: FUN_1000afd30
// address: 0x1000afd30
// body: available
// range: 0x1000afd30-0x1000aff97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000afd30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_1e8 [72];
  undefined1 auStack_1a0 [144];
  undefined1 auStack_110 [56];
  undefined1 auStack_d8 [56];
  undefined1 auStack_a0 [64];
  
  puVar2 = &DAT_100a76d38;
  FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
  puVar3 = puVar2;
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar1 = PTR___sSSN_1009957f8;
  *(undefined **)(puVar3 + 0x38) = PTR___sSSN_1009957f8;
  *(undefined ***)(puVar3 + 0x40) = &PTR_PTR_1009e61c8;
  puVar10 = (undefined8 *)(puVar3 + 0x20);
  *puVar10 = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  thunk_FUN_10068573c(auStack_110);
  _swift_setDeallocating(puVar3);
  uVar9 = *(undefined8 *)(puVar3 + 0x10);
  puVar3 = &DAT_100a76d40;
  FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
  _swift_arrayDestroy(puVar10,uVar9,puVar3);
  bVar5 = (byte)uVar9;
  (*param_5)();
  FUN_1000abcec(auStack_110);
  puVar4 = puVar2;
  _swift_initStackObject(puVar2,auStack_1a0);
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined **)(puVar4 + 0x38) = puVar1;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_1009e61c8;
  puVar11 = (undefined8 *)(puVar4 + 0x20);
  *puVar11 = param_6;
  *(undefined8 *)(puVar4 + 0x28) = param_4;
  thunk_FUN_10068573c(auStack_d8);
  _swift_setDeallocating(puVar4);
  uVar9 = *(undefined8 *)(puVar4 + 0x10);
  _swift_arrayDestroy(puVar11,uVar9,puVar3);
  bVar6 = (byte)uVar9;
  (*param_5)();
  FUN_1000abcec(auStack_d8);
  _swift_initStackObject(puVar2,auStack_1e8);
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x38) = PTR___sSSN_1009957f8;
  *(undefined ***)(puVar2 + 0x40) = &PTR_PTR_1009e61c8;
  puVar12 = (undefined8 *)(puVar2 + 0x20);
  *puVar12 = 0x695f6e6565726373;
  *(undefined8 *)(puVar2 + 0x28) = 0xe900000000000064;
  thunk_FUN_10068573c(auStack_a0);
  _swift_setDeallocating(puVar2);
  uVar7 = *(ulong *)(puVar2 + 0x10);
  _swift_arrayDestroy(puVar12,uVar7,puVar3);
  FUN_1006893b4();
  FUN_1000abcec(param_2);
  FUN_1000abcec(auStack_a0);
  if ((uVar7 & 1) == 0) {
    if ((long)puVar12 < -0x80000000) {
      uVar8 = 0x80000000;
    }
    else {
      if (0x7ffffffe < (long)puVar12) {
        puVar12 = (undefined8 *)0x7fffffff;
      }
      uVar8 = SUB84(puVar12,0);
    }
  }
  else {
    uVar8 = 0;
  }
  *param_1 = puVar10;
  *(byte *)(param_1 + 1) = bVar5 & 1;
  param_1[2] = puVar11;
  *(byte *)(param_1 + 3) = bVar6 & 1;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar8;
  *(byte *)(param_1 + 4) = (byte)uVar7 & 1;
  return;
}

