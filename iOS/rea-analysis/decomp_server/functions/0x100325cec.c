// rea decompile_all
// name: FUN_100325cec
// address: 0x100325cec
// body: available
// range: 0x100325cec-0x100325e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100325e64) */

void FUN_100325cec(ulong param_1,long param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  char acStack_80 [16];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  FUN_1002c76a8();
  pcVar3 = acStack_80 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((param_1 & 1) != 0) {
    plVar5 = *(long **)(param_2 + _TtC9Alamofire7Request::mutableState);
    uVar4 = *(undefined8 *)(plVar5[2] + 0x10);
    _os_unfair_lock_lock(uVar4);
    lVar2 = *(long *)(*plVar5 + 0x60);
    _swift_beginAccess((long)plVar5 + lVar2,auStack_58,0,0);
    FUN_10028ab0c((long)plVar5 + lVar2,pcVar3);
    cVar1 = *pcVar3;
    FUN_100315098(pcVar3);
    _os_unfair_lock_unlock(uVar4);
    if (cVar1 != '\0') {
      uVar4 = *(undefined8 *)(plVar5[2] + 0x10);
      _os_unfair_lock_lock(uVar4);
      FUN_10028ab0c((long)plVar5 + lVar2,pcVar3);
      cVar1 = *pcVar3;
      FUN_100315098(pcVar3);
      _os_unfair_lock_unlock(uVar4);
      if (cVar1 != '\x01') {
        uVar4 = *(undefined8 *)(plVar5[2] + 0x10);
        _os_unfair_lock_lock(uVar4);
        FUN_10028ab0c((long)plVar5 + lVar2,pcVar3);
        cVar1 = *pcVar3;
        FUN_100315098(pcVar3);
        _os_unfair_lock_unlock(uVar4);
        if (cVar1 != '\x02') {
          return;
        }
      }
    }
    uVar4 = *(undefined8 *)(plVar5[2] + 0x10);
    _os_unfair_lock_lock(uVar4);
    _swift_beginAccess((long)plVar5 + lVar2,auStack_70,0x21,0);
    FUN_1002d0d94((long)plVar5 + lVar2,param_2);
    _swift_endAccess(auStack_70);
    _os_unfair_lock_unlock(uVar4);
  }
  return;
}

