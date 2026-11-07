// rea decompile_all
// name: FUN_100220e30
// address: 0x100220e30
// body: available
// range: 0x100220e30-0x10022106b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10022105c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100220e30(undefined1 *param_1,uchar *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  uchar *puVar2;
  uint uVar3;
  code *pcVar4;
  uchar *puVar5;
  uchar *puVar6;
  uint uVar7;
  long unaff_x21;
  long lVar8;
  undefined1 local_79;
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
  uVar3 = (uint)((ulong)param_5 >> 0x20);
  uVar7 = uVar3 >> 0x1e;
  puVar5 = param_2;
  if (uVar3 >> 0x1e < 2) {
    if (uVar7 == 0) {
      local_78 = (undefined1)param_4;
      uStack_77 = (undefined1)((ulong)param_4 >> 8);
      uStack_76 = (undefined1)((ulong)param_4 >> 0x10);
      uStack_75 = (undefined1)((ulong)param_4 >> 0x18);
      uStack_74 = (undefined1)((ulong)param_4 >> 0x20);
      uStack_73 = (undefined1)((ulong)param_4 >> 0x28);
      uStack_72 = (undefined1)((ulong)param_4 >> 0x30);
      uStack_71 = (undefined1)((ulong)param_4 >> 0x38);
      uStack_70 = (undefined1)param_5;
      uStack_6f = (undefined1)((ulong)param_5 >> 8);
      uStack_6e = (undefined1)((ulong)param_5 >> 0x10);
      uStack_6d = (undefined1)((ulong)param_5 >> 0x18);
      uStack_6c = (undefined1)((ulong)param_5 >> 0x20);
      uStack_6b = (undefined1)((ulong)param_5 >> 0x28);
      if (param_2 != (uchar *)0x0) {
        _CC_MD5(&local_78,(ushort)((ulong)param_5 >> 0x30) & 0xff,param_2);
      }
      local_79 = 0;
      goto LAB_100221010;
    }
    lVar8 = (long)(int)param_4;
    puVar2 = (uchar *)((param_4 >> 0x20) - lVar8);
    if (param_4 >> 0x20 < lVar8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100221050);
      (*pcVar4)();
    }
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    puVar6 = puVar5;
    if (puVar5 != (uchar *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar8,(long)puVar6)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10022105c);
        (*pcVar4)();
      }
      puVar5 = puVar5 + (lVar8 - (long)puVar6);
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if ((long)puVar2 <= (long)puVar6) {
      puVar6 = puVar2;
    }
  }
  else {
    if (uVar7 != 2) {
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
      FUN_10022106c(&local_79,&local_78,&local_78,param_2,param_3,param_4,param_5);
      if (unaff_x21 == 0) goto LAB_100221010;
      goto LAB_100221060;
    }
    lVar8 = *(long *)(param_4 + 0x10);
    lVar1 = *(long *)(param_4 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    puVar6 = puVar5;
    if (puVar5 != (uchar *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar8,(long)puVar6)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100221058);
        (*pcVar4)();
      }
      puVar5 = puVar5 + (lVar8 - (long)puVar6);
    }
    puVar2 = (uchar *)(lVar1 - lVar8);
    if (SBORROW8(lVar1,lVar8)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100221054);
      (*pcVar4)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if ((long)puVar2 <= (long)puVar6) {
      puVar6 = puVar2;
    }
  }
  puVar2 = (uchar *)0x0;
  if (puVar5 != (uchar *)0x0) {
    puVar2 = puVar6 + (long)puVar5;
  }
  FUN_10022106c(&local_78,puVar5,puVar2,param_2,param_3,param_4,param_5);
  local_79 = local_78;
  if (unaff_x21 != 0) {
LAB_100221060:
    _swift_errorRelease(unaff_x21);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10022106c);
    (*pcVar4)();
  }
LAB_100221010:
  *param_1 = local_79;
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

