// rea decompile_all
// name: FUN_100315268
// address: 0x100315268
// body: available
// range: 0x100315268-0x1003153bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003153bc to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_100315268(byte *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x1008f97a8,
             &TargetProtocolRequirement_1008f97b8);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = *(ulong *)(lVar4 + 0x40);
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  uVar6 = (ulong)*(uint *)(lVar4 + 0x50) & 0xff;
  if ((7 < (uint)uVar6 || (*(uint *)(lVar4 + 0x50) & 0x100000) != 0) || 0x18 < uVar5 + 1) {
    lVar2 = *(long *)param_2;
    *(long *)param_1 = lVar2;
    _swift_retain();
    return (byte *)(lVar2 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
  }
  bVar1 = *(byte *)((long)param_2 + uVar5);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar9 = (uint)uVar5;
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10031535c;
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
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_10031535c:
  if (uVar7 == 1) {
    *param_1 = (byte)*param_2;
    param_1[uVar5] = 1;
  }
  else {
    if (uVar7 != 0) {
      pbVar3 = _memcpy(param_1,param_2,uVar5 + 1);
      return pbVar3;
    }
    (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar2);
    param_1[uVar5] = 0;
  }
  return param_1;
}

