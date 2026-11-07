// rea decompile_all
// name: FUN_1006920a8
// address: 0x1006920a8
// body: available
// range: 0x1006920a8-0x10069217f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


size_t FUN_1006920a8(long *param_1,ulong *param_2,void *param_3,ulong param_4)

{
  size_t sVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_3 == (void *)0x0) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/autobuffer.cc",0x8c,
                  "Read","NULL != _pbuffer");
  }
  uVar2 = *param_2;
  if ((long)uVar2 < 0) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/autobuffer.cc",0x8d,
                  "Read","0 <= _pos");
    uVar2 = *param_2;
  }
  uVar3 = param_1[2];
  if (uVar3 < uVar2) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/autobuffer.cc",0x8e,
                  "Read","(size_t)_pos <= Length()");
    uVar3 = param_1[2];
    uVar2 = *param_2;
  }
  sVar1 = uVar3 - uVar2;
  if (param_4 <= uVar3 - uVar2) {
    sVar1 = param_4;
  }
  _memcpy(param_3,(void *)(*param_1 + param_1[1]),sVar1);
  return sVar1;
}

