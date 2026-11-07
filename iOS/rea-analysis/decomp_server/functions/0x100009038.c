// rea decompile_all
// name: FUN_100009038
// address: 0x100009038
// body: available
// range: 0x100009038-0x100009263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100009248 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100009038(undefined8 param_1,void *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  long lVar1;
  void *pvVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  uint uVar9;
  long lVar10;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar3 = (uint)(param_5 >> 0x20);
  uVar9 = uVar3 >> 0x1e;
  pvVar7 = param_2;
  if (uVar3 >> 0x1e < 2) {
    if (uVar9 == 0) {
      local_66 = (undefined1)param_4;
      local_65 = (undefined1)((ulong)param_4 >> 8);
      local_64 = (undefined1)((ulong)param_4 >> 0x10);
      local_63 = (undefined1)((ulong)param_4 >> 0x18);
      local_62 = (undefined1)((ulong)param_4 >> 0x20);
      local_61 = (undefined1)((ulong)param_4 >> 0x28);
      local_60 = (undefined1)((ulong)param_4 >> 0x30);
      local_5f = (undefined1)((ulong)param_4 >> 0x38);
      local_5e = (undefined1)param_5;
      local_5d = (undefined1)(param_5 >> 8);
      local_5c = (undefined1)(param_5 >> 0x10);
      local_5b = (undefined1)(param_5 >> 0x18);
      local_5a = (undefined1)(param_5 >> 0x20);
      local_59 = (undefined1)(param_5 >> 0x28);
      if (param_2 == (void *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100009250);
        (*pcVar4)();
      }
      iVar6 = _memcmp(param_2,&local_66,param_5 >> 0x30 & 0xff);
      bVar5 = iVar6 == 0;
      goto LAB_100009200;
    }
    lVar10 = (long)(int)param_4;
    pvVar2 = (void *)((param_4 >> 0x20) - lVar10);
    if (param_4 >> 0x20 < lVar10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10000923c);
      (*pcVar4)();
    }
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    pvVar8 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar10,(long)pvVar8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100009248);
        (*pcVar4)();
      }
      pvVar7 = (void *)((lVar10 - (long)pvVar8) + (long)pvVar7);
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if ((long)pvVar2 <= (long)pvVar8) {
      pvVar8 = pvVar2;
    }
    if (param_2 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10000925c);
      (*pcVar4)();
    }
    if (pvVar7 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100009264);
      (*pcVar4)();
    }
  }
  else {
    if (uVar9 != 2) {
      if (param_2 == (void *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100009254);
        (*pcVar4)();
      }
      bVar5 = true;
      goto LAB_100009200;
    }
    lVar10 = *(long *)(param_4 + 0x10);
    lVar1 = *(long *)(param_4 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    pvVar8 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar10,(long)pvVar8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100009244);
        (*pcVar4)();
      }
      pvVar7 = (void *)((lVar10 - (long)pvVar8) + (long)pvVar7);
    }
    pvVar2 = (void *)(lVar1 - lVar10);
    if (SBORROW8(lVar1,lVar10)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100009240);
      (*pcVar4)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if ((long)pvVar2 <= (long)pvVar8) {
      pvVar8 = pvVar2;
    }
    if (param_2 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100009258);
      (*pcVar4)();
    }
    if (pvVar7 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100009260);
      (*pcVar4)();
    }
  }
  if (pvVar7 == param_2) {
    bVar5 = true;
  }
  else {
    iVar6 = _memcmp(param_2,pvVar7,(size_t)pvVar8);
    bVar5 = iVar6 == 0;
  }
LAB_100009200:
  *(bool *)param_1 = bVar5;
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

