// rea decompile_all
// name: FUN_1001f7f0c
// address: 0x1001f7f0c
// body: available
// range: 0x1001f7f0c-0x1001f81bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f81bc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f7f0c(undefined8 param_1,undefined1 *param_2,undefined8 param_3,long param_4,
                  long param_5,ulong param_6)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined1 local_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar9 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar9 == 0) {
      local_78 = SUB81(param_2,0);
      uStack_77 = (undefined1)((ulong)param_2 >> 8);
      uStack_76 = (undefined1)((ulong)param_2 >> 0x10);
      uStack_75 = (undefined1)((ulong)param_2 >> 0x18);
      uStack_74 = (undefined1)((ulong)param_2 >> 0x20);
      uStack_73 = (undefined1)((ulong)param_2 >> 0x28);
      uStack_72 = (undefined1)((ulong)param_2 >> 0x30);
      uStack_71 = (undefined1)((ulong)param_2 >> 0x38);
      uStack_70 = (undefined1)param_3;
      uStack_6f = (undefined1)((ulong)param_3 >> 8);
      uStack_6e = (undefined1)((ulong)param_3 >> 0x10);
      uStack_6d = (undefined1)((ulong)param_3 >> 0x18);
      uStack_6c = (undefined1)((ulong)param_3 >> 0x20);
      uStack_6b = (undefined1)((ulong)param_3 >> 0x28);
      uVar4 = (ulong)*(uint *)(param_4 + 0x18);
      uVar2 = (uint)(param_6 >> 0x20);
      uVar9 = uVar2 >> 0x1e;
      if (uVar2 >> 0x1e < 2) {
        if (uVar9 == 0) {
          uVar7 = param_6 >> 0x30 & 0xff;
        }
        else {
          iVar8 = (int)((ulong)param_5 >> 0x20);
          if (SBORROW4(iVar8,(int)param_5)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f81bc);
            (*pcVar3)();
          }
          uVar7 = (ulong)(iVar8 - (int)param_5);
        }
      }
      else if (uVar9 == 2) {
        uVar7 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
        if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f8124);
          (*pcVar3)();
        }
      }
      else {
        uVar7 = 0;
      }
      _write(uVar4,&local_78,uVar7);
      if ((long)uVar4 < 0) {
        FUN_100401b14(0);
        FUN_1003fb4ec(FUN_1001fa714,param_4,0xd000000000000095,0x80000001008a00c0,0xd000000000000011
                      ,0x80000001008a17b0,0x2e8,0);
      }
      goto LAB_1001f80bc;
    }
    lVar10 = (long)(int)param_2;
    puVar6 = (undefined1 *)(((long)param_2 >> 0x20) - lVar10);
    if ((long)param_2 >> 0x20 < lVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f81ac);
      (*pcVar3)();
    }
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    puVar5 = param_2;
    if (param_2 != (undefined1 *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar10,(long)puVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f81b8);
        (*pcVar3)();
      }
      param_2 = param_2 + (lVar10 - (long)puVar5);
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if ((long)puVar6 <= (long)puVar5) {
      puVar5 = puVar6;
    }
LAB_1001f807c:
    puVar6 = (undefined1 *)0x0;
    if (param_2 != (undefined1 *)0x0) {
      puVar6 = puVar5 + (long)param_2;
    }
  }
  else {
    if (uVar9 == 2) {
      lVar10 = *(long *)(param_2 + 0x10);
      lVar1 = *(long *)(param_2 + 0x18);
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      puVar5 = param_2;
      if (param_2 != (undefined1 *)0x0) {
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar10,(long)puVar5)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f81b4);
          (*pcVar3)();
        }
        param_2 = param_2 + (lVar10 - (long)puVar5);
      }
      puVar6 = (undefined1 *)(lVar1 - lVar10);
      if (SBORROW8(lVar1,lVar10)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f81b0);
        (*pcVar3)();
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      if ((long)puVar6 <= (long)puVar5) {
        puVar5 = puVar6;
      }
      goto LAB_1001f807c;
    }
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6b = 0;
    local_78 = 0;
    uStack_77 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    param_2 = &local_78;
    puVar6 = &local_78;
  }
  FUN_1001ef428(param_1,param_2,puVar6,param_4,param_5,param_6);
LAB_1001f80bc:
  _swift_release(param_4);
  FUN_100006cdc(param_5,param_6);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

