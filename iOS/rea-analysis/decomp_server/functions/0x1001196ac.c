// rea decompile_all
// name: FUN_1001196ac
// address: 0x1001196ac
// body: available
// range: 0x1001196ac-0x100119a8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100119a88 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

uint FUN_1001196ac(undefined8 param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ID IVar9;
  long extraout_x8;
  long lVar10;
  undefined1 auStack_c0 [16];
  char acStack_b0 [8];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [15];
  byte local_91;
  undefined1 auStack_90 [16];
  char *local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar6 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100401b14(0);
  local_80 = param_2;
  FUN_1003fb45c(FUN_10011cdb4,auStack_90,0xd000000000000092,0x8000000100882970,0xd000000000000017,
                0x800000010088d2a0,0x2de,0);
  if (*param_2 == '\0') {
LAB_100119794:
    if (*(long *)(param_2 + 0x20) != 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      FUN_10011b7b4(uVar7);
      uVar5 = (uint)uVar7;
      goto LAB_1001197b4;
    }
  }
  else if (*param_2 == '\x01') {
    if ((param_2[0x10] & 1U) != 0) goto LAB_100119794;
    uVar8 = *(ulong *)(param_2 + 8);
    cVar1 = param_2[0x28];
    if (uVar8 == 0x39) {
      FUN_10011ddac();
      cVar4 = (char)uVar8;
      (*(code *)PTR____chkstk_darwin_100995498)();
      acStack_b0[lVar2] = cVar4;
      acStack_b0[lVar2 + 1] = '\0';
      acStack_b0[lVar2 + 2] = cVar1;
      FUN_1003fb48c(thunk_FUN_10011cdbc,auStack_c0 + lVar2,0xd00000000000009a,0x800000010088d2c0,
                    0xd000000000000029,0x800000010088d360,0x16,0);
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      uVar8 = 1;
      FUN_1000b35b4();
      uVar5 = 0;
      if ((uVar8 & 1) == 0) {
        FUN_1001176a0();
      }
      else {
        local_91 = 0;
        uVar8 = 0;
        FUN_10011bbac(0x10000,&local_91);
        if ((uVar8 & 1) == 0) {
          IVar9 = NSEvent::modifierFlags((ID)&_OBJC_CLASS___NSEvent,"modifierFlags");
          uVar5 = (uint)(IVar9 >> 0x10) & 1;
        }
        else {
          uVar5 = (uint)local_91;
        }
      }
      __s10Foundation4DateVACycfC(auStack_a0 + lVar2);
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
      (**(code **)(lVar10 + 8))(auStack_a0 + lVar2,lVar6);
      (*(code *)PTR____chkstk_darwin_100995498)();
      acStack_b0[lVar2] = '\0';
      uVar5 = (uVar5 ^ 0xffffffff) & 1;
      acStack_b0[lVar2 + 1] = (char)uVar5;
      *(undefined8 *)((long)&uStack_a8 + lVar2) = param_1;
      FUN_1003fb48c(FUN_1000fcd1c,auStack_c0 + lVar2,0xd000000000000092,0x8000000100882970,
                    &DAT_d000000000000018,0x800000010088a1c0,0x36c,0);
      FUN_100119d7c(uVar5);
      goto LAB_1001197b4;
    }
    if (-1 < (long)uVar8) {
      if (uVar8 >> 0x10 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100119a84);
        (*pcVar3)();
      }
      uVar7 = 1;
LAB_10011998c:
      FUN_100118bbc(uVar8,uVar7,cVar1);
      uVar5 = (uint)uVar8;
      goto LAB_1001197b4;
    }
  }
  else if ((param_2[0x10] & 1U) == 0) {
    uVar8 = *(ulong *)(param_2 + 8);
    cVar1 = param_2[0x28];
    if (uVar8 == 0x39) {
      FUN_10011ddac();
      cVar4 = (char)uVar8;
      (*(code *)PTR____chkstk_darwin_100995498)();
      acStack_b0[lVar2] = cVar4;
      acStack_b0[lVar2 + 1] = '\x01';
      acStack_b0[lVar2 + 2] = cVar1;
      uVar5 = 0;
      FUN_1003fb48c(FUN_10011cdbc,auStack_c0 + lVar2,0xd00000000000009a,0x800000010088d2c0,
                    0xd000000000000029,0x800000010088d360,0x16,0);
      FUN_10011cb1c();
      goto LAB_1001197b4;
    }
    if (-1 < (long)uVar8) {
      if (uVar8 >> 0x10 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100119a88);
        (*pcVar3)();
      }
      uVar7 = 0;
      goto LAB_10011998c;
    }
  }
  uVar5 = 0;
LAB_1001197b4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_78) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

