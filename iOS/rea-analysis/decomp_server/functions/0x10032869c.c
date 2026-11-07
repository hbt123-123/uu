// rea decompile_all
// name: FUN_10032869c
// address: 0x10032869c
// body: available
// range: 0x10032869c-0x1003287a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10032869c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  param_2 = param_2 + _TtC9Alamofire7Request::id;
  FUN_10032af40(param_2);
  puVar1 = &DAT_100a85d18;
  FUN_100004bb4(&DAT_100a85d18,&DAT_10081a3c8);
  lVar4 = *(long *)(puVar1 + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  (**(code **)(lVar4 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_1,puVar1);
  uVar3 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar6 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  puVar2 = &DAT_1009b1a30;
  _swift_allocObject(&DAT_1009b1a30,uVar6 + lVar5,uVar3 | 7);
  (**(code **)(lVar4 + 0x20))
            (puVar2 + uVar6,&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar1);
  FUN_1002ff368(param_3,param_2,thunk_FUN_10032c528,puVar2);
  _swift_release(puVar2);
  return 0;
}

