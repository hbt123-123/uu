// rea decompile_all
// name: FUN_1006542a4
// address: 0x1006542a4
// body: available
// range: 0x1006542a4-0x100654373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006542a4(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  
  lVar1 = *param_1;
  lVar4 = param_1[1];
  lVar5 = param_1[3];
  bVar6 = *(byte *)(param_1 + 4) ^ *(byte *)(param_2 + 0x20);
  uVar2 = (ulong)*(byte *)(param_1 + 2);
  lVar3 = lVar5;
  FUN_1006527dc();
  if ((uVar2 & 0xff) == 0) {
    _swift_bridgeObjectRelease(lVar5);
    if (lVar1 != 0 || lVar4 != 0) goto LAB_100654334;
  }
  else {
    if (((uint)uVar2 & 0xff) == 1) {
      _swift_bridgeObjectRelease(lVar5);
      goto LAB_100654334;
    }
    lVar7 = *(long *)(lVar3 + 0x10);
    _swift_bridgeObjectRelease(lVar5);
    if (lVar7 != 0) goto LAB_100654334;
  }
  bVar6 = 0;
LAB_100654334:
  *param_1 = lVar1;
  param_1[1] = lVar4;
  *(char *)(param_1 + 2) = (char)uVar2;
  param_1[3] = lVar3;
  *(byte *)(param_1 + 4) = bVar6 & 1;
  return;
}

