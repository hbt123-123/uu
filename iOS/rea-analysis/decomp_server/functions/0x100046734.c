// rea decompile_all
// name: FUN_100046734
// address: 0x100046734
// body: available
// range: 0x100046734-0x100046937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100046734(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  __ss11_StringGutsV4growyySiF(0x4d);
  __sSS6appendyySSF(&DAT_d000000000000030,0x800000010087cf40);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x3a73746f6c7320,0xe700000000000000);
  FUN_100045ddc(param_4,FUN_10006d644,FUN_100074214,FUN_100046d5c);
  uVar8 = param_4;
  puVar3 = PTR___sSiN_100995968;
  __sSa11descriptionSSvg();
  _swift_bridgeObjectRelease(param_4);
  __sSS6appendyySSF(uVar8,puVar3);
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(&DAT_d000000000000010,0x800000010087cf80);
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar5 = *(long *)(param_5 + 0x10);
  if (lVar5 != 0) {
    FUN_10006fc00(0,lVar5,0);
    puVar6 = (undefined8 *)(param_5 + 0x20);
    uVar7 = *(ulong *)(puVar3 + 0x10);
    do {
      uVar8 = *puVar6;
      uVar1 = uVar7 + 1;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar7) {
        FUN_10006fc00(1 < *(ulong *)(puVar3 + 0x18),uVar1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar1;
      *(undefined8 *)(puVar3 + uVar7 * 8 + 0x20) = uVar8;
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 0xb;
      uVar7 = uVar1;
    } while (lVar5 != 0);
  }
  puVar2 = puVar3;
  puVar4 = PTR___sSiN_100995968;
  __sSa11descriptionSSvg(puVar3,PTR___sSiN_100995968);
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(puVar2,puVar4);
  _swift_bridgeObjectRelease(puVar4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

