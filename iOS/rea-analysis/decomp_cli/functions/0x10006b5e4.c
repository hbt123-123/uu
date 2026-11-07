// rea decompile_all
// name: FUN_10006b5e4
// address: 0x10006b5e4
// body: available
// range: 0x10006b5e4-0x10006b757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10006b5e4(long *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  if ((*(uint *)(lVar4 + 0x50) & 0x1000f8) != 0 || 0x18 < (uVar5 + 10 & 0xfffffffffffffff8) + 0x10)
  {
    uVar6 = *(uint *)(lVar4 + 0x50) & 0xf8;
    lVar4 = *(long *)param_2;
    *param_1 = lVar4;
    _swift_retain();
    return (long *)(lVar4 + ((ulong)(uVar6 + 0x17 & (uVar6 ^ 0xffffffff)) & 0x1f8));
  }
  bVar3 = *(byte *)((long)param_2 + uVar5);
  uVar6 = (uint)bVar3;
  if (1 < bVar3) {
    uVar8 = (uint)uVar5;
    uVar7 = 4;
    if (uVar8 < 4) {
      uVar7 = uVar8;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10006b6d0;
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
    uVar6 = uVar7 | bVar3 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_10006b6d0:
  if (uVar6 != 1) {
    (**(code **)(lVar4 + 0x10))(param_1,param_2);
  }
  else {
    lVar4 = *(long *)(param_2 + 2);
    *param_1 = *(long *)param_2;
    param_1[1] = lVar4;
    _swift_retain();
  }
  *(bool *)((long)param_1 + uVar5) = uVar6 == 1;
  pbVar1 = (byte *)(uVar5 + 1 + (long)param_1);
  pbVar2 = (byte *)(uVar5 + 1 + (long)param_2);
  *pbVar1 = *pbVar2;
  pbVar1[1] = pbVar2[1];
  *(undefined8 *)((ulong)(pbVar1 + 9) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(pbVar2 + 9) & 0xfffffffffffffff8);
  ((undefined8 *)((ulong)(pbVar1 + 9) & 0xfffffffffffffff8))[1] =
       ((undefined8 *)((ulong)(pbVar2 + 9) & 0xfffffffffffffff8))[1];
  _swift_bridgeObjectRetain();
  return param_1;
}

