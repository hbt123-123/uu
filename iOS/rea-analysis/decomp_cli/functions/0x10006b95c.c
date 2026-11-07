// rea decompile_all
// name: FUN_10006b95c
// address: 0x10006b95c
// body: available
// range: 0x10006b95c-0x10006bb3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_10006b95c(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  
  lVar9 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar9 + -8);
  uVar4 = *(ulong *)(lVar11 + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  if (param_1 == param_2) goto LAB_10006badc;
  bVar3 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar3;
  uVar10 = (uint)uVar4;
  if (1 < bVar3) {
    uVar6 = 4;
    if (uVar10 < 4) {
      uVar6 = uVar10;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10006ba0c;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar5 = uVar6 | bVar3 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10006ba0c:
  if (uVar5 == 1) {
    _swift_release(*(undefined8 *)(param_1 + 2));
  }
  else {
    (**(code **)(lVar11 + 8))(param_1,lVar9);
  }
  bVar3 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar3;
  if (1 < bVar3) {
    uVar6 = 4;
    if (uVar10 < 4) {
      uVar6 = uVar10;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10006baa4;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar3 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10006baa4:
  if (uVar5 == 1) {
    uVar8 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = uVar8;
    *(byte *)((long)param_1 + uVar4) = 1;
    _swift_retain();
  }
  else {
    (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar9);
    *(byte *)((long)param_1 + uVar4) = 0;
  }
LAB_10006badc:
  pbVar1 = (byte *)(uVar4 + 1 + (long)param_1);
  pbVar2 = (byte *)(uVar4 + 1 + (long)param_2);
  *pbVar1 = *pbVar2;
  pbVar1[1] = pbVar2[1];
  puVar7 = (undefined8 *)((ulong)(pbVar1 + 9) & 0xfffffffffffffff8);
  *puVar7 = *(undefined8 *)((ulong)(pbVar2 + 9) & 0xfffffffffffffff8);
  uVar8 = puVar7[1];
  puVar7[1] = ((undefined8 *)((ulong)(pbVar2 + 9) & 0xfffffffffffffff8))[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  return param_1;
}

