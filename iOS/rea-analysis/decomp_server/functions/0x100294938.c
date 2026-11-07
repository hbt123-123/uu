// rea decompile_all
// name: FUN_100294938
// address: 0x100294938
// body: available
// range: 0x100294938-0x1002949e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002949d4) */

void FUN_100294938(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_1;
  uStack_68 = param_2;
  local_60 = param_3;
  lStack_58 = param_4;
  FUN_100291330(FUN_1002a6dc0,auStack_90);
  lVar2 = *(long *)(param_4 + _TtC9Alamofire17DataStreamRequest::streamMutableState);
  uVar1 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar1);
  _swift_beginAccess(lVar2 + 0x18,auStack_48,0x21,0);
  FUN_10029590c(lVar2 + 0x18,param_4);
  _swift_endAccess(auStack_48);
  _os_unfair_lock_unlock(uVar1);
  return;
}

