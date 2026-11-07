// rea decompile_all
// name: FUN_1003a9758
// address: 0x1003a9758
// body: available
// range: 0x1003a9758-0x1003a98ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003a9758(void)

{
  code *pcVar1;
  ulong uVar2;
  ID self;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar6;
  long lVar7;
  
  uVar2 = 0xd;
  __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(0xd,0,0);
  self = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  if ((uVar2 & 1) == 0) {
    lVar4 = 0;
    __s10Foundation3URLVMa();
    lVar7 = *(long *)(lVar4 + -8);
    (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
    puVar6 = &stack0xffffffffffffffc0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    puVar5 = (undefined1 *)0xd000000000000031;
    __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar6,0xd000000000000031,0x80000001008b3040);
  }
  else {
    puVar3 = &DAT_100a766c8;
    FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
    (*(code *)PTR____chkstk_darwin_100995498)
              (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar6 = &stack0xffffffffffffffc0 + -extraout_x8;
    __s10Foundation3URLV6stringACSgSSh_tcfC(puVar6,0xd00000000000004d,0x80000001008b3080);
    lVar4 = 0;
    __s10Foundation3URLVMa();
    lVar7 = *(long *)(lVar4 + -8);
    puVar5 = puVar6;
    (**(code **)(lVar7 + 0x30))(puVar6,1,lVar4);
    if ((int)puVar5 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003a983c);
      (*pcVar1)();
    }
  }
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar7 + 8))(puVar6,lVar4);
  NSWorkspace::openURL_(self,"openURL:",puVar5);
  return 0;
}

