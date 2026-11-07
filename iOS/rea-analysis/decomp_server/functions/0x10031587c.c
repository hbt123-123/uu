// rea decompile_all
// name: FUN_10031587c
// address: 0x10031587c
// body: available
// range: 0x10031587c-0x100315a3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100315a38 to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_10031587c(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x1008f97a8,
             &TargetProtocolRequirement_1008f97b8);
  lVar8 = *(long *)(lVar2 + -8);
  uVar4 = *(ulong *)(lVar8 + 0x40);
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar1;
  uVar7 = (uint)uVar4;
  if (bVar1 < 2) {
LAB_100315944:
    if (uVar5 == 0) {
      (**(code **)(lVar8 + 8))(param_1,lVar2);
    }
  }
  else {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if (1 < (int)uVar5) {
      if (uVar5 == 2) {
        uVar6 = (uint)(ushort)*param_1;
      }
      else if (uVar5 == 3) {
        uVar6 = (uint)(uint3)*param_1;
      }
      else {
        uVar6 = *param_1;
      }
LAB_100315928:
      uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
      if (3 < uVar7) {
        uVar5 = uVar6;
      }
      uVar5 = uVar5 + 2;
      goto LAB_100315944;
    }
    if (uVar5 != 0) {
      uVar6 = (uint)(byte)*param_1;
      goto LAB_100315928;
    }
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1003159cc;
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
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1003159cc:
  if (uVar5 == 1) {
    *(byte *)param_1 = (byte)*param_2;
    *(byte *)((long)param_1 + uVar4) = 1;
  }
  else {
    if (uVar5 != 0) {
      puVar3 = _memcpy(param_1,param_2,uVar4 + 1);
      return puVar3;
    }
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar2);
    *(byte *)((long)param_1 + uVar4) = 0;
  }
  return param_1;
}

