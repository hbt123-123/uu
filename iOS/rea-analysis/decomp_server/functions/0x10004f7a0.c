// rea decompile_all
// name: FUN_10004f7a0
// address: 0x10004f7a0
// body: available
// range: 0x10004f7a0-0x10004f8a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004f7a0(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 local_78 [2];
  undefined *local_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  _swift_weakLoadStrong();
  if (param_4 == 0) {
    local_78[0] = 0x2716;
    local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
    if ((*(byte *)(param_5 + 0x10) & 1) == 0) {
      *(undefined1 *)(param_5 + 0x10) = 1;
      (**(code **)(param_5 + 0x18))(local_78);
    }
    (*param_2)();
  }
  else {
    _swift_retain(param_5);
    _swift_retain(param_3);
    FUN_10007e788(param_6,param_7,param_8,param_1,param_4,param_5,param_2,param_3);
    _swift_release(param_4);
    _swift_release(param_5);
    _swift_release(param_3);
  }
  return;
}

