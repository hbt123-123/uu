// rea decompile_all
// name: FUN_10039b100
// address: 0x10039b100
// body: available
// range: 0x10039b100-0x10039b2b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039b180 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010039b1c4) */
/* WARNING: Removing unreachable block (ram,0x00010039b1dc) */

undefined8 * FUN_10039b100(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 local_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  local_48 = param_1;
  FUN_10039aa24();
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
    __s10Foundation11JSONEncoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONEncoderCACycfc();
    puVar6 = &local_48;
    puVar7 = PTR___sSdN_1009958f0;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj
              (puVar6,PTR___sSdN_1009958f0,PTR___sSdSEsWP_100995900);
    _swift_release(uVar3);
    IVar2 = *(ID *)(unaff_x20 + 0x10);
    if (IVar2 == 0) {
      FUN_100006cdc(puVar6,puVar7);
    }
    else {
      puVar4 = puVar6;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar6,puVar7);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar1);
      _objc_msgSend(IVar2,"setData:forKey:",puVar4,uVar5);
      FUN_100006cdc(puVar6,puVar7);
      puVar6 = (undefined8 *)0x0;
    }
  }
  else {
    IVar2 = *(ID *)(unaff_x20 + 0x10);
    puVar6 = (undefined8 *)0x0;
    if (IVar2 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar1);
      _objc_msgSend(IVar2,"removeValueForKey:",uVar5);
      return (undefined8 *)0x0;
    }
  }
  return puVar6;
}

