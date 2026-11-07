// rea decompile_all
// name: FUN_100250880
// address: 0x100250880
// body: available
// range: 0x100250880-0x10025092f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100250880(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 0x178);
    if (lVar4 == 0) {
      uVar2 = 0xffffff9a;
    }
    else {
      uVar2 = (ulong)*(uint *)(lVar4 + 0x90) - *(long *)(lVar4 + 0x98);
      if (param_2 != 0) {
        uVar1 = (uint)uVar2;
        if (param_3 <= uVar2) {
          uVar1 = param_3;
        }
        if (uVar1 == 0) {
          uVar2 = 0;
        }
        else {
          lVar3 = lVar4 + 200;
          FUN_10024e8ac(lVar3,*(undefined8 *)(lVar4 + 0x130),
                        *(long *)(lVar4 + 0x88) + *(long *)(lVar4 + 0x98),0);
          if (lVar3 == 0) {
            lVar4 = *(long *)(param_1 + 0x178);
            uVar2 = *(ulong *)(lVar4 + 0x108);
            (**(code **)(lVar4 + 0xd8))(uVar2,*(undefined8 *)(lVar4 + 0x130),param_2,uVar1);
            if (uVar2 != uVar1) {
              uVar1 = 0xffffffff;
            }
            uVar2 = (ulong)uVar1;
          }
          else {
            uVar2 = 0xffffffff;
          }
        }
      }
    }
    return uVar2;
  }
  return 0xffffff9a;
}

