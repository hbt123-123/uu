// rea decompile_all
// name: FUN_1001b94f4
// address: 0x1001b94f4
// body: available
// range: 0x1001b94f4-0x1001b9737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001b94f4(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *local_38;
  
  FUN_1003dab3c();
  (**(code **)(*param_1 + 0x108))(&local_38);
  _swift_release(param_1);
  if (local_38 == (long *)0x0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1001b91fc,0,0xd000000000000093,0x800000010089b8d0,0x5564696c61567369,
                  0xef6f666e49726573,399,0);
  }
  else {
    (**(code **)(*local_38 + 0x80))();
    if (param_2 != 0) {
      _swift_bridgeObjectRelease(param_2);
      (**(code **)(*local_38 + 0xb0))();
      if (param_2 != 0) {
        _swift_bridgeObjectRelease(param_2);
        (**(code **)(*local_38 + 0x98))();
        if (param_2 != 0) {
          _swift_bridgeObjectRelease(param_2);
          FUN_100401b14(0);
          pcVar1 = FUN_1001b9228;
          uVar3 = 0x193;
          goto LAB_1001b9674;
        }
      }
    }
    lVar2 = 0;
    (**(code **)(*local_38 + 0xf8))();
    if (lVar2 != 0) {
      _swift_bridgeObjectRelease(lVar2);
      (**(code **)(*local_38 + 0xe0))();
      if (lVar2 != 0) {
        _swift_bridgeObjectRelease(lVar2);
        (**(code **)(*local_38 + 0xb0))();
        if (lVar2 != 0) {
          _swift_bridgeObjectRelease(lVar2);
          FUN_100401b14(0);
          pcVar1 = FUN_1001b9254;
          uVar3 = 0x197;
LAB_1001b9674:
          FUN_1003fb48c(pcVar1,0,0xd000000000000093,0x800000010089b8d0,0x5564696c61567369,
                        0xef6f666e49726573,uVar3,0);
          _swift_release(local_38);
          return 1;
        }
      }
    }
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1001b9280,0,0xd000000000000093,0x800000010089b8d0,0x5564696c61567369,
                  0xef6f666e49726573,0x19a,0);
    _swift_release(local_38);
  }
  return 0;
}

