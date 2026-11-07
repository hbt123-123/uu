// rea decompile_all
// name: FUN_1001815e8
// address: 0x1001815e8
// body: available
// range: 0x1001815e8-0x1001817db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001815e8(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 local_b0 [2];
  undefined8 local_9f;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70 [2];
  
  FUN_1004a11c4(local_b0);
  uVar10 = *(ulong *)(param_2 + 0x78) >> 0x3c;
  uVar1 = 0;
  if (uVar10 < 0xf) {
    uVar1 = *(ulong *)(param_2 + 0x68) & 0xffffffff;
  }
  uVar2 = 0;
  if (uVar10 < 0xf) {
    uVar2 = *(ulong *)(param_2 + 0x68) & 0xffffffff00000000;
  }
  uVar3 = 0;
  if (uVar10 < 0xf) {
    uVar3 = *(undefined8 *)(param_2 + 0x70);
  }
  uVar4 = 0xc000000000000000;
  if (uVar10 < 0xf) {
    uVar4 = *(ulong *)(param_2 + 0x78);
  }
  local_70[0] = local_b0[0];
  thunk_FUN_100040b80();
  switchD_10004048c::caseD_6d(uStack_88,local_80,uStack_78);
  bVar9 = (byte)local_80;
  FUN_10017cb14();
  puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar12 = *(long *)(param_3 + 0x10);
  if (lVar12 == 0) {
    FUN_100040bb4(local_70,&DAT_100a7b958,&DAT_10080fd88);
    puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    FUN_10006ff64(0,lVar12,0);
    puVar13 = (undefined8 *)(param_3 + 0x38);
    do {
      uVar5 = puVar13[-3];
      uVar7 = puVar13[-2];
      uVar6 = puVar13[-1];
      uVar8 = *puVar13;
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uVar10 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar10) {
        FUN_10006ff64(1 < *(ulong *)(puVar11 + 0x18),uVar10 + 1,1);
      }
      puVar13 = puVar13 + 4;
      *(ulong *)(puVar11 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar11 + uVar10 * 0x30 + 0x20) = uVar5;
      *(undefined8 *)(puVar11 + uVar10 * 0x30 + 0x28) = uVar7;
      *(undefined8 *)(puVar11 + uVar10 * 0x30 + 0x30) = uVar6;
      *(undefined8 *)(puVar11 + uVar10 * 0x30 + 0x38) = uVar8;
      *(undefined8 *)(puVar11 + uVar10 * 0x30 + 0x48) = 0xc000000000000000;
      *(undefined8 *)(puVar11 + uVar10 * 0x30 + 0x40) = 0;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    FUN_100040bb4(local_70,&DAT_100a7b958,&DAT_10080fd88);
  }
  *param_1 = puVar11;
  param_1[1] = param_4;
  *(byte *)(param_1 + 2) = bVar9 & 1;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_90,uStack_97);
  *(undefined8 *)((long)param_1 + 0x11) = local_9f;
  param_1[4] = CONCAT71(uStack_8f,uStack_90);
  param_1[5] = uVar2 | uVar1;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  return;
}

