// rea decompile_all
// name: FUN_1001a790c
// address: 0x1001a790c
// body: available
// range: 0x1001a790c-0x1001a7a53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a7a50 to 0x1007df160 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001a790c(void)

{
  undefined *puVar1;
  ID self;
  undefined8 uVar2;
  ID self_00;
  ID IVar3;
  long lVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  puVar1 = &_OBJC_CLASS___NSWorkspaceOpenConfiguration;
  _objc_allocWithZone();
  self = _objc_msgSend((ID)puVar1,"init");
  *(ID *)(unaff_x22 + 0xa8) = self;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,PTR___sSSN_1009957f8);
  _objc_msgSend(self,"setArguments:",uVar2);
  self_00 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  *(ID *)(unaff_x22 + 0xb0) = self_00;
  IVar3 = self_00;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  *(ID *)(unaff_x22 + 0xb8) = IVar3;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1001a7a54;
  lVar4 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar4,1);
  puVar1 = &DAT_100a7cad0;
  FUN_100004bb4(&DAT_100a7cad0,&DAT_100811558);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100995490;
  *(undefined **)(unaff_x22 + 0x88) = puVar1;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_1001a7bfc;
  *(undefined **)(unaff_x22 + 0x68) = &DAT_1009a21f0;
  *(long *)(unaff_x22 + 0x70) = lVar4;
  NSWorkspace::openURL_configuration_completionHandler_
            (self_00,"openURL:configuration:completionHandler:",IVar3,self);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}

