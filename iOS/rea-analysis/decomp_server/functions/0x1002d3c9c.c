// rea decompile_all
// name: FUN_1002d3c9c
// address: 0x1002d3c9c
// body: available
// range: 0x1002d3c9c-0x1002d3e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002d3e40 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d3c9c(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar2 = (uint)(param_2 >> 0x20);
  uVar5 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar5 == 0) {
      local_58 = SUB81(param_1,0);
      uStack_57 = (undefined1)((ulong)param_1 >> 8);
      uStack_56 = (undefined1)((ulong)param_1 >> 0x10);
      uStack_55 = (undefined1)((ulong)param_1 >> 0x18);
      uStack_54 = (undefined1)((ulong)param_1 >> 0x20);
      uStack_53 = (undefined1)((ulong)param_1 >> 0x28);
      uStack_52 = (undefined1)((ulong)param_1 >> 0x30);
      uStack_51 = (undefined1)((ulong)param_1 >> 0x38);
      uStack_50 = (undefined1)param_2;
      uStack_4f = (undefined1)(param_2 >> 8);
      uStack_4e = (undefined1)(param_2 >> 0x10);
      uStack_4d = (undefined1)(param_2 >> 0x18);
      uStack_4c = (undefined1)(param_2 >> 0x20);
      uStack_4b = (undefined1)(param_2 >> 0x28);
      param_1 = &local_58;
      puVar4 = (undefined1 *)(param_2 >> 0x30 & 0xff);
      goto LAB_1002d3dfc;
    }
    lVar7 = (long)(int)param_1;
    puVar6 = (undefined1 *)(((long)param_1 >> 0x20) - lVar7);
    if ((long)param_1 >> 0x20 < lVar7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002d3e38);
      (*pcVar3)();
    }
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (param_1 != (undefined1 *)0x0) {
      puVar4 = param_1;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar7,(long)puVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002d3e40);
        (*pcVar3)();
      }
      param_1 = param_1 + (lVar7 - (long)puVar4);
      goto LAB_1002d3dc0;
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
LAB_1002d3df4:
    param_1 = (undefined1 *)0x0;
  }
  else {
    if (uVar5 == 2) {
      lVar7 = *(long *)(param_1 + 0x10);
      lVar1 = *(long *)(param_1 + 0x18);
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      puVar4 = param_1;
      if (param_1 != (undefined1 *)0x0) {
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar7,(long)puVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002d3e3c);
          (*pcVar3)();
        }
        param_1 = param_1 + (lVar7 - (long)puVar4);
      }
      puVar6 = (undefined1 *)(lVar1 - lVar7);
      if (SBORROW8(lVar1,lVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002d3d8c);
        (*pcVar3)();
      }
LAB_1002d3dc0:
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (param_1 != (undefined1 *)0x0) {
        if ((long)puVar6 <= (long)puVar4) {
          puVar4 = puVar6;
        }
        goto LAB_1002d3dfc;
      }
      goto LAB_1002d3df4;
    }
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    local_58 = 0;
    uStack_57 = 0;
    uStack_56 = 0;
    uStack_55 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
    uStack_51 = 0;
    param_1 = &local_58;
  }
  puVar4 = (undefined1 *)0x0;
LAB_1002d3dfc:
  __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(param_1,puVar4);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

