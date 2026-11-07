// rea decompile_all
// name: FUN_10006b830
// address: 0x10006b830
// body: available
// range: 0x10006b830-0x10006b95b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10006b830(undefined8 *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = *(ulong *)(lVar5 + 0x40);
  if (uVar6 < 0x11) {
    uVar6 = 0x10;
  }
  bVar4 = *(byte *)((long)param_2 + uVar6);
  uVar7 = (uint)bVar4;
  if (1 < bVar4) {
    uVar9 = (uint)uVar6;
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10006b8d4;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar7 = uVar8 | bVar4 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_10006b8d4:
  if (uVar7 != 1) {
    (**(code **)(lVar5 + 0x10))(param_1,param_2);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar3;
    _swift_retain();
  }
  *(bool *)((long)param_1 + uVar6) = uVar7 == 1;
  pbVar1 = (byte *)(uVar6 + 1 + (long)param_1);
  pbVar2 = (byte *)(uVar6 + 1 + (long)param_2);
  *pbVar1 = *pbVar2;
  pbVar1[1] = pbVar2[1];
  *(undefined8 *)((ulong)(pbVar1 + 9) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(pbVar2 + 9) & 0xfffffffffffffff8);
  ((undefined8 *)((ulong)(pbVar1 + 9) & 0xfffffffffffffff8))[1] =
       ((undefined8 *)((ulong)(pbVar2 + 9) & 0xfffffffffffffff8))[1];
  _swift_bridgeObjectRetain();
  return param_1;
}

