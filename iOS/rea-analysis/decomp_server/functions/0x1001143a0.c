// rea decompile_all
// name: FUN_1001143a0
// address: 0x1001143a0
// body: available
// range: 0x1001143a0-0x1001144eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16] FUN_1001143a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *self;
  undefined *puVar2;
  ID IVar3;
  char *pcVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar5,param_1,param_2);
  self = &_OBJC_CLASS___NSBundle;
  _objc_allocWithZone();
  puVar2 = self;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  IVar3 = _objc_msgSend((ID)self,"initWithURL:",puVar2);
  if (IVar3 == 0) {
    (**(code **)(lVar6 + 8))(puVar5,lVar1);
  }
  else {
    pcVar4 = "resourcePath";
    IVar3 = _objc_msgSend(IVar3,"resourcePath");
    if (IVar3 != 0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      (**(code **)(lVar6 + 8))(puVar5,lVar1);
      goto LAB_1001144d0;
    }
    (**(code **)(lVar6 + 8))(puVar5,lVar1);
  }
  IVar3 = 0;
  pcVar4 = (char *)0x0;
LAB_1001144d0:
  auVar7._8_8_ = pcVar4;
  auVar7._0_8_ = IVar3;
  return auVar7;
}

