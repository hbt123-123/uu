// rea decompile_all
// name: FUN_10060d5fc
// address: 0x10060d5fc
// body: available
// range: 0x10060d5fc-0x10060d76b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10060d5fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  puVar3 = auStack_70 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    lVar2 = 0;
    __s8Dispatch0A13WorkItemFlagsVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,1,1,lVar2);
    puVar1 = &DAT_1009def00;
    _swift_allocObject(&DAT_1009def00,0x28,7);
    *(undefined8 *)(puVar1 + 0x10) = param_4;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    *(undefined8 *)(puVar1 + 0x20) = param_2;
    lVar2 = DAT_100aafef8;
    _swift_retain(param_2);
    if (lVar2 != -1) {
      _swift_once(&DAT_100aafef8,FUN_10060f124);
    }
    _swift_beginAccess(&DAT_100b3a770,auStack_70,0,0);
    FUN_100610304(DAT_100b3a778,puVar3,FUN_10060ed8c,puVar1);
    _swift_release();
    _swift_release(param_3);
    _swift_release(puVar1);
    FUN_1006070b4(puVar3);
  }
  return;
}

