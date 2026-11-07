// rea decompile_all
// name: FUN_10006bc58
// address: 0x10006bc58
// body: available
// range: 0x10006bc58-0x10006be2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_10006bc58(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  
  lVar9 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar9 + -8);
  uVar5 = *(ulong *)(lVar11 + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  if (param_1 == param_2) goto LAB_10006bdd4;
  bVar3 = *(byte *)((long)param_1 + uVar5);
  uVar6 = (uint)bVar3;
  uVar10 = (uint)uVar5;
  if (1 < bVar3) {
    uVar7 = 4;
    if (uVar10 < 4) {
      uVar7 = uVar10;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10006bd08;
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar6 = uVar7 | bVar3 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_10006bd08:
  if (uVar6 == 1) {
    _swift_release(*(undefined8 *)(param_1 + 2));
  }
  else {
    (**(code **)(lVar11 + 8))(param_1,lVar9);
  }
  bVar3 = *(byte *)((long)param_2 + uVar5);
  uVar6 = (uint)bVar3;
  if (1 < bVar3) {
    uVar7 = 4;
    if (uVar10 < 4) {
      uVar7 = uVar10;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10006bda0;
      uVar7 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_2;
    }
    else {
      uVar7 = *param_2;
    }
    uVar6 = uVar7 | bVar3 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_10006bda0:
  if (uVar6 != 1) {
    (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar9);
  }
  else {
    uVar4 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar4;
  }
  *(bool *)((long)param_1 + uVar5) = uVar6 == 1;
LAB_10006bdd4:
  pbVar1 = (byte *)(uVar5 + 1 + (long)param_1);
  pbVar2 = (byte *)(uVar5 + 1 + (long)param_2);
  *pbVar1 = *pbVar2;
  pbVar1[1] = pbVar2[1];
  puVar8 = (undefined8 *)((ulong)(pbVar1 + 9) & 0xfffffffffffffff8);
  *puVar8 = *(undefined8 *)((ulong)(pbVar2 + 9) & 0xfffffffffffffff8);
  uVar4 = puVar8[1];
  puVar8[1] = ((undefined8 *)((ulong)(pbVar2 + 9) & 0xfffffffffffffff8))[1];
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}

