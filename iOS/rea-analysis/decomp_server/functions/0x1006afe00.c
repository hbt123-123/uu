// rea decompile_all
// name: FUN_1006afe00
// address: 0x1006afe00
// body: available
// range: 0x1006afe00-0x1006affe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006affe0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006afe00(uint *param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ushort local_228 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_3 < 0x100) {
    if (param_4 < 0xd) {
      uVar11 = 0;
      uVar9 = (ulong)(param_3 + 1);
      uVar4 = 1 << (ulong)(param_4 & 0x1f);
      uVar6 = (ulong)uVar4;
      iVar13 = 1;
      uVar10 = uVar4 - 1;
      do {
        while( true ) {
          uVar2 = *(ushort *)(param_2 + uVar11 * 2);
          if ((short)uVar2 != -1) break;
          uVar12 = (ulong)uVar10;
          uVar10 = uVar10 - 1;
          *(char *)((long)param_1 + uVar12 * 4 + 6) = (char)uVar11;
          local_228[uVar11] = 1;
          uVar11 = uVar11 + 1;
          if (uVar9 == uVar11) goto LAB_1006afeec;
        }
        if ((int)((uint)(0x8000 << (ulong)(param_4 & 0x1f)) >> 0x10) <= (int)(short)uVar2) {
          iVar13 = 0;
        }
        local_228[uVar11] = uVar2;
        uVar11 = uVar11 + 1;
      } while (uVar9 != uVar11);
LAB_1006afeec:
      uVar11 = 0;
      uVar12 = 0;
      *param_1 = param_4 | iVar13 << 0x10;
      do {
        sVar3 = *(short *)(param_2 + uVar11 * 2);
        if (0 < sVar3) {
          iVar13 = 0;
          do {
            *(char *)((long)param_1 + uVar12 * 4 + 6) = (char)uVar11;
            do {
              uVar1 = (uVar4 >> 3) + (uVar4 >> 1) + 3 + (int)uVar12 & uVar4 - 1;
              uVar12 = (ulong)uVar1;
            } while (uVar10 < uVar1);
            iVar13 = iVar13 + 1;
          } while (iVar13 != sVar3);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar9);
      if ((int)uVar12 == 0) {
        puVar8 = (undefined1 *)((long)param_1 + 7);
        do {
          uVar2 = local_228[(byte)puVar8[-1]];
          local_228[(byte)puVar8[-1]] = uVar2 + 1;
          uVar10 = param_4 - ((uint)LZCOUNT((uint)uVar2) ^ 0x1f);
          *puVar8 = (char)uVar10;
          *(ushort *)(puVar8 + -3) = (uVar2 << (ulong)(uVar10 & 0x1f)) - (short)uVar4;
          puVar8 = puVar8 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        uVar5 = 0;
        if (*(long *)PTR____stack_chk_guard_1009954a0 == local_28) {
          return;
        }
      }
      else {
        uVar5 = 0xffffffffffffffff;
        if (*(long *)PTR____stack_chk_guard_1009954a0 == local_28) {
          return;
        }
      }
      goto LAB_1006affe0;
    }
    uVar5 = 0xffffffffffffffd4;
    lVar7 = *(long *)PTR____stack_chk_guard_1009954a0;
  }
  else {
    uVar5 = 0xffffffffffffffd2;
    lVar7 = *(long *)PTR____stack_chk_guard_1009954a0;
  }
  if (lVar7 == *(long *)PTR____stack_chk_guard_1009954a0) {
    return;
  }
LAB_1006affe0:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar5);
}

