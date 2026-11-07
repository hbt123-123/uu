// rea decompile_all
// name: FUN_1006326c0
// address: 0x1006326c0
// body: available
// range: 0x1006326c0-0x1006327eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006326c0(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar5 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  sVar1 = (*(long *)(lVar5 + 0x40) + 7U & 0xfffffffffffffff8) + 8;
  if (uVar3 < param_3) {
    uVar6 = 2;
    uVar2 = uVar6;
    if ((int)sVar1 == 0) {
      uVar2 = (param_3 - uVar3) + 1;
    }
    if (0xffff < uVar2) {
      uVar6 = 4;
    }
    if (uVar2 < 0x100) {
      uVar6 = 1;
    }
    uVar7 = 0;
    if (1 < uVar2) {
      uVar7 = uVar6;
    }
    iVar4 = param_2 - uVar3;
    if (uVar3 <= param_2 && iVar4 != 0) {
LAB_100632754:
      if ((int)sVar1 != 0) {
        iVar4 = 1;
        _bzero(param_1,sVar1);
        *param_1 = ~uVar3 + param_2;
      }
      if (uVar7 < 2) {
        if (uVar7 == 0) {
          return;
        }
        *(char *)((long)param_1 + sVar1) = (char)iVar4;
        return;
      }
      if (uVar7 == 2) {
        *(short *)((long)param_1 + sVar1) = (short)iVar4;
        return;
      }
      *(int *)((long)param_1 + sVar1) = iVar4;
      return;
    }
  }
  else {
    uVar7 = 0;
    iVar4 = param_2 - uVar3;
    if (uVar3 <= param_2 && iVar4 != 0) goto LAB_100632754;
  }
  if (uVar7 < 2) {
    if (uVar7 != 0) {
      *(undefined1 *)((long)param_1 + sVar1) = 0;
    }
  }
  else if (uVar7 == 2) {
    *(undefined2 *)((long)param_1 + sVar1) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + sVar1) = 0;
  }
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006327b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x38))();
  return;
}

