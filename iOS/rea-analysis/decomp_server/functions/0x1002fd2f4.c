// rea decompile_all
// name: FUN_1002fd2f4
// address: 0x1002fd2f4
// body: available
// range: 0x1002fd2f4-0x1002fd403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002fd3f0) */

void FUN_1002fd2f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  FUN_10030cf00();
  puVar4 = auStack_70 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100082394(param_2,puVar4,FUN_10030cf00);
  puVar2 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,lVar1);
  FUN_1000d27dc(puVar4,FUN_10030cf00);
  if ((int)puVar2 == 0) {
    lVar1 = *(long *)(param_3 + _TtC9Alamofire16WebSocketRequest::socketMutableState);
    uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x10);
    _os_unfair_lock_lock(uVar3);
    _swift_beginAccess(lVar1 + 0x18,auStack_68,0x21,0);
    FUN_1002fcdd8(param_1,lVar1 + 0x18,param_3);
    _swift_endAccess(auStack_68);
    _os_unfair_lock_unlock(uVar3);
  }
  return;
}

