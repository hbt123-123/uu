// rea decompile_all
// name: FUN_10064b85c
// address: 0x10064b85c
// body: available
// range: 0x10064b85c-0x10064ba87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10064ba84 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064b85c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined1 local_80 [8];
  undefined1 local_78 [16];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar3 = (uint)(param_2 >> 0x20);
  uVar6 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar6 == 0) {
      local_78[0] = (undefined1)param_1;
      local_78[1] = (undefined1)((ulong)param_1 >> 8);
      local_78[2] = (undefined1)((ulong)param_1 >> 0x10);
      local_78[3] = (undefined1)((ulong)param_1 >> 0x18);
      local_78[4] = (undefined1)((ulong)param_1 >> 0x20);
      local_78[5] = (undefined1)((ulong)param_1 >> 0x28);
      local_78[6] = (undefined1)((ulong)param_1 >> 0x30);
      local_78[7] = (undefined1)((ulong)param_1 >> 0x38);
      local_78[8] = (undefined1)param_2;
      local_78[9] = (undefined1)(param_2 >> 8);
      local_78[10] = (undefined1)(param_2 >> 0x10);
      local_78[0xb] = (undefined1)(param_2 >> 0x18);
      local_78[0xc] = (undefined1)(param_2 >> 0x20);
      local_78[0xd] = (undefined1)(param_2 >> 0x28);
      FUN_10064b4d4(local_80,local_78,local_78 + (param_2 >> 0x30 & 0xff));
      goto LAB_10064ba3c;
    }
    lVar7 = (long)(int)param_1;
    lVar2 = (param_1 >> 0x20) - lVar7;
    if (param_1 >> 0x20 < lVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10064ba78);
      (*pcVar4)();
    }
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    lVar5 = param_1;
    if (param_1 != 0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar7,lVar5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10064ba84);
        (*pcVar4)();
      }
      param_1 = (lVar7 - lVar5) + param_1;
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar2 <= lVar5) {
      lVar5 = lVar2;
    }
  }
  else {
    if (uVar6 != 2) {
      local_78[8] = 0;
      local_78[9] = 0;
      local_78[10] = 0;
      local_78[0xb] = 0;
      local_78[0xc] = 0;
      local_78[0xd] = 0;
      local_78[0] = 0;
      local_78[1] = 0;
      local_78[2] = 0;
      local_78[3] = 0;
      local_78[4] = 0;
      local_78[5] = 0;
      local_78[6] = 0;
      local_78[7] = 0;
      FUN_10064b4d4(local_80,local_78,local_78);
      goto LAB_10064ba3c;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)(param_1 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    lVar5 = param_1;
    if (param_1 != 0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar2,lVar5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10064ba80);
        (*pcVar4)();
      }
      param_1 = (lVar2 - lVar5) + param_1;
    }
    lVar1 = lVar7 - lVar2;
    if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10064ba7c);
      (*pcVar4)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar1 <= lVar5) {
      lVar5 = lVar1;
    }
  }
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = lVar5 + param_1;
  }
  FUN_10064b4d4(local_78,param_1,lVar2,param_3,param_4,param_5,param_6);
LAB_10064ba3c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

