// rea decompile_all
// name: FUN_1006abe30
// address: 0x1006abe30
// body: available
// range: 0x1006abe30-0x1006ac18b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ac188 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006abe30(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  undefined1 auStack_108 [128];
  ulong auStack_88 [4];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar12 = *(long *)(param_4 + 0x20);
  uVar4 = *(uint *)(param_4 + 0x1c);
  lVar1 = lVar12 + (ulong)uVar4;
  cVar13 = *(char *)(param_6 + 1);
  sVar5 = *(short *)(param_6 + 2);
  iVar3 = sVar5 + 0x7e;
  if (-0x40 < sVar5) {
    iVar3 = sVar5 + 0x3f;
  }
  uVar2 = iVar3 >> 6;
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      *(undefined1 *)(lVar1 + uVar7) = 1;
      *(undefined1 *)(lVar12 + uVar7) = 0;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_4 + 0x1c));
  }
  FUN_1006ac18c(param_4,lVar12);
  *(undefined1 *)(lVar1 + (ulong)*(uint *)(param_4 + 0x1c)) = 0;
  (**(code **)(param_4 + 8))(param_4,lVar1,*(int *)(param_4 + 0x1c) + 1);
  (**(code **)(param_4 + 8))(param_4,param_1,(long)cVar13);
  (**(code **)(param_4 + 8))(param_4,param_2,param_3);
  FUN_1006ac22c(param_4,lVar12,lVar12);
  FUN_1006ac18c(param_4,lVar12);
  (**(code **)(param_4 + 8))(param_4,lVar1,*(undefined4 *)(param_4 + 0x1c));
  FUN_1006ac22c(param_4,lVar12,lVar1);
  FUN_1006ac18c(param_4,lVar12);
  *(undefined1 *)(lVar1 + (ulong)*(uint *)(param_4 + 0x1c)) = 1;
  (**(code **)(param_4 + 8))(param_4,lVar1,*(int *)(param_4 + 0x1c) + 1);
  (**(code **)(param_4 + 8))(param_4,param_1,(long)cVar13);
  (**(code **)(param_4 + 8))(param_4,param_2,param_3);
  FUN_1006ac22c(param_4,lVar12,lVar12);
  FUN_1006ac18c(param_4,lVar12);
  (**(code **)(param_4 + 8))(param_4,lVar1,*(undefined4 *)(param_4 + 0x1c));
  FUN_1006ac22c(param_4,lVar12,lVar1);
  lVar10 = 0;
  lVar11 = (long)(char)uVar2 + -1;
LAB_1006ac028:
  cVar13 = '\0';
  do {
    do {
      FUN_1006ac18c(param_4,lVar12);
      (**(code **)(param_4 + 8))(param_4,lVar1,*(undefined4 *)(param_4 + 0x1c));
      FUN_1006ac22c(param_4,lVar12,lVar1);
      uVar8 = (ulong)*(uint *)(param_4 + 0x1c);
      uVar7 = (ulong)uVar4;
      cVar9 = cVar13;
    } while (*(uint *)(param_4 + 0x1c) == 0);
    do {
      cVar13 = cVar9 + '\x01';
      auStack_108[(long)cVar9 + 0x80] = *(undefined1 *)(lVar12 + uVar7);
      if ((int)(-(uVar2 >> 7 & 1) & 0xfffff800 | (uVar2 & 0xff) << 3) <= (int)cVar13) {
        if ((int)sVar5 < (int)(-(uVar2 >> 7 & 1) & 0xffffc000 | (uVar2 & 0xff) << 6)) {
          *(ulong *)(auStack_108 + lVar11 * 8 + 0x80) =
               *(ulong *)(auStack_108 + lVar11 * 8 + 0x80) &
               0xffffffffffffffffU >> ((long)-sVar5 & 0x3fU);
        }
        uVar6 = param_1;
        FUN_1006abb08(param_1,param_2,param_3,auStack_108 + 0x80,param_5,param_6);
        if ((int)uVar6 == 0) {
          FUN_1006ac18c(param_4,lVar12);
          *(undefined1 *)(lVar1 + (ulong)*(uint *)(param_4 + 0x1c)) = 0;
          (**(code **)(param_4 + 8))(param_4,lVar1,*(int *)(param_4 + 0x1c) + 1);
          FUN_1006ac22c(param_4,lVar12,lVar12);
          FUN_1006ac18c(param_4,lVar12);
          (**(code **)(param_4 + 8))(param_4,lVar1,*(undefined4 *)(param_4 + 0x1c));
          FUN_1006ac22c(param_4,lVar12,lVar1);
          lVar10 = lVar10 + 1;
          if (lVar10 != 0x40) goto LAB_1006ac028;
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail(uVar6);
        }
        return;
      }
      uVar7 = uVar7 + 1;
      uVar8 = uVar8 - 1;
      cVar9 = cVar13;
    } while (uVar8 != 0);
  } while( true );
}

