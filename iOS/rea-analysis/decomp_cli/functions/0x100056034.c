// rea decompile_all
// name: FUN_100056034
// address: 0x100056034
// body: available
// range: 0x100056034-0x1000560fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100056034(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  FUN_100052ca8();
  lVar4 = *(long *)(param_1 + 0x10) + 1;
  lVar5 = 0x39;
  uVar2 = 0x20722d;
  do {
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      uVar2 = 0;
      uVar6 = 0xe000000000000000;
      goto LAB_100056094;
    }
    pcVar1 = (char *)(param_1 + lVar5);
    lVar5 = lVar5 + 0xa8;
  } while (*pcVar1 != '\x01');
  uVar6 = 0xe300000000000000;
LAB_100056094:
  __sSS6appendyySSF(uVar2,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(param_1);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1000f0418;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_1000f03e8,PTR___sSis23CustomStringConvertiblesWP_1000f0418);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  return ZEXT816(0xe000000000000000) << 0x40;
}

