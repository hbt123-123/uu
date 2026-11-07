// rea decompile_all
// name: FUN_100358c90
// address: 0x100358c90
// body: available
// range: 0x100358c90-0x100358d77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100358c90(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
             code *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 local_48;
  
  _swift_unownedRetainStrong(param_5);
  (*param_6)(&local_48);
  if (param_4 >> 0x3c < 0xf) {
    uVar3 = (uint)(param_4 >> 0x20);
    uVar1 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar1 == 0) {
        if ((param_4 & 0xff000000000000) != 0) {
LAB_100358d34:
          uVar2 = local_48;
          FUN_10035b0f4(local_48,param_2);
          uVar3 = (uint)param_2;
          _swift_release(param_5);
          goto LAB_100358d50;
        }
      }
      else if ((long)(int)param_3 != param_3 >> 0x20) goto LAB_100358d34;
    }
    else if ((uVar1 == 2) && (*(long *)(param_3 + 0x10) != *(long *)(param_3 + 0x18)))
    goto LAB_100358d34;
  }
  _swift_release(param_5);
  uVar2 = 0;
  uVar3 = 0;
LAB_100358d50:
  _swift_bridgeObjectRelease(local_48);
  auVar4._8_4_ = uVar3 & 1;
  auVar4._0_8_ = uVar2;
  auVar4._12_4_ = 0;
  return auVar4;
}

