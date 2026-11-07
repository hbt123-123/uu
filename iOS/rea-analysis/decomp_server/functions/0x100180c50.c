// rea decompile_all
// name: FUN_100180c50
// address: 0x100180c50
// body: available
// range: 0x100180c50-0x100180e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100180e44 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100180c50(ushort *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  undefined8 local_58 [2];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar2 = (uint)(param_2 >> 0x20);
  uVar7 = uVar2 >> 0x1e;
  iVar4 = (int)param_1;
  if (uVar2 >> 0x1e < 2) {
    if (uVar7 == 0) {
      if (6 < (param_2 >> 0x30 & 0xff)) {
LAB_100180cd4:
        if (uVar7 == 2) {
          lVar10 = *(long *)(param_1 + 8);
          lVar1 = *(long *)(param_1 + 0xc);
          puVar5 = param_1;
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (puVar5 != (ushort *)0x0) {
            puVar6 = puVar5;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar10,(long)puVar6)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100180e40);
              (*pcVar3)();
            }
            puVar5 = (ushort *)((lVar10 - (long)puVar6) + (long)puVar5);
          }
          if (SBORROW8(lVar1,lVar10)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100180e3c);
            (*pcVar3)();
          }
LAB_100180d50:
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (puVar5 == (ushort *)0x0) goto LAB_100180df0;
          puVar5 = (ushort *)(ulong)*puVar5;
        }
        else {
          puVar5 = param_1;
          if (uVar7 == 1) {
            lVar10 = (long)iVar4;
            if ((long)param_1 >> 0x20 < lVar10) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100180e38);
              (*pcVar3)();
            }
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            if (puVar5 == (ushort *)0x0) {
              __s10Foundation13__DataStorageC7_lengthSivg();
              goto LAB_100180df0;
            }
            puVar6 = puVar5;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar10,(long)puVar6)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100180e44);
              (*pcVar3)();
            }
            puVar5 = (ushort *)((lVar10 - (long)puVar6) + (long)puVar5);
            goto LAB_100180d50;
          }
        }
        uVar7 = ((uint)puVar5 & 0xff00ff) << 8;
        uVar2 = (((uint)puVar5 & 0xff00ff00) >> 8 | uVar7) & 0xffff;
        uVar8 = 0;
        if (((uVar7 & 0xf00) == 0x800) &&
           (uVar7 = uVar2 * 0x843 >> 0x10,
           (uVar2 + (uVar7 + ((uVar2 - uVar7 & 0xfffe) >> 1) >> 4) * -0x1f & 0xffff) == 0)) {
          FUN_100008184(param_1,param_2);
          FUN_100181070(local_58,param_1,param_2,param_1,param_2,6);
          uVar8 = local_58[0];
        }
        goto LAB_100180df8;
      }
    }
    else {
      iVar9 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar9,iVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100180e34);
        (*pcVar3)();
      }
      if (6 < iVar9 - iVar4) goto LAB_100180cd4;
    }
  }
  else if (uVar7 == 2) {
    if (SBORROW8(*(long *)(param_1 + 0xc),*(long *)(param_1 + 8))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100180e30);
      (*pcVar3)();
    }
    if (6 < *(long *)(param_1 + 0xc) - *(long *)(param_1 + 8)) goto LAB_100180cd4;
  }
LAB_100180df0:
  uVar8 = 0;
LAB_100180df8:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

