// rea decompile_all
// name: FUN_10060b2f8
// address: 0x10060b2f8
// body: available
// range: 0x10060b2f8-0x10060b41f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10060b2f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  puVar4 = auStack_70 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar4,1,1,lVar2);
  if (DAT_100aafef8 != -1) {
    _swift_once(&DAT_100aafef8,FUN_10060f124);
  }
  _swift_beginAccess(&DAT_100b3a770,auStack_68,0,0);
  uVar3 = DAT_100b3a778;
  FUN_10060913c(DAT_100b3a778,puVar4,DAT_100b3a780,FUN_10060b420,0,param_1,param_2);
  FUN_1006070b4(puVar4);
  return uVar3;
}

