// rea decompile_all
// name: FUN_100515954
// address: 0x100515954
// body: available
// range: 0x100515954-0x100515ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100515954(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),0x100900ffc,
             &TargetProtocolRequirement_10090100c);
  lVar7 = *(long *)(lVar6 + -8);
  uVar4 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar7 + 0x40);
  sVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 0x28;
  uVar10 = 2;
  uVar11 = uVar10;
  if ((int)sVar1 == 0) {
    uVar11 = (param_3 - uVar2) + 1;
  }
  if (0xffff < uVar11) {
    uVar10 = 4;
  }
  if (uVar11 < 0x100) {
    uVar10 = 1;
  }
  uVar3 = 0;
  if (1 < uVar11) {
    uVar3 = uVar10;
  }
  uVar10 = 0;
  if (uVar2 < param_3) {
    uVar10 = uVar3;
  }
  uVar11 = (uint)param_2;
  iVar5 = uVar11 - uVar2;
  if (uVar11 < uVar2 || iVar5 == 0) {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar10 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (uVar11 != 0) {
      if (0x7ffffffe < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000100515a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))(param_1,param_2,uVar4,lVar6);
        return;
      }
      puVar8 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if ((int)uVar11 < 0) {
        puVar8[2] = 0;
        puVar8[1] = 0;
        puVar8[4] = 0;
        puVar8[3] = 0;
        *puVar8 = (ulong)(uVar11 & 0x7fffffff);
      }
      else {
        puVar8[3] = (ulong)(uVar11 - 1);
      }
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar5 = 1;
      _bzero(param_1,sVar1);
      *param_1 = ~uVar2 + uVar11;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar5;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar5;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar5;
    }
  }
  return;
}

