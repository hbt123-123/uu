// rea decompile_all
// name: FUN_1002d073c
// address: 0x1002d073c
// body: available
// range: 0x1002d073c-0x1002d0883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d073c(undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((param_2[0xd8] & 1) == 0) {
    lVar5 = *(long *)(param_2 + 0xe0);
    uVar4 = *(ulong *)(lVar5 + 0x10);
    if (uVar4 < *(ulong *)(*(long *)(param_2 + 0xd0) + 0x10)) {
      lVar5 = *(long *)(param_2 + 0xd0) + uVar4 * 0x10;
      puVar3 = &DAT_1009adce8;
      _swift_allocObject(&DAT_1009adce8,0x20,7);
      uVar7 = *(undefined8 *)(lVar5 + 0x28);
      uVar6 = *(undefined8 *)(lVar5 + 0x20);
      *(undefined8 *)(puVar3 + 0x18) = uVar7;
      *(undefined8 *)(puVar3 + 0x10) = uVar6;
      param_2[0xd8] = 1;
      puVar1 = &DAT_1009add10;
      _swift_allocObject(&DAT_1009add10,0x28,7);
      *(undefined8 *)(puVar1 + 0x10) = param_3;
      *(code **)(puVar1 + 0x18) = FUN_100102840;
      *(undefined **)(puVar1 + 0x20) = puVar3;
      *param_1 = FUN_1002d86d0;
      param_1[1] = puVar1;
      _swift_retain(uVar6,uVar7);
    }
    else {
      _swift_bridgeObjectRelease();
      puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
      *(undefined **)(param_2 + 0xd0) = PTR___swiftEmptyArrayStorage_100995ea0;
      *(undefined **)(param_2 + 0xe0) = puVar3;
      if (*param_2 < 3) {
        *param_2 = 4;
      }
      param_2[0xe8] = 1;
      lVar2 = 0;
      FUN_1002c76a8();
      param_2[*(int *)(lVar2 + 0x60)] = 0;
      puVar3 = &DAT_1009adcc0;
      _swift_allocObject(&DAT_1009adcc0,0x20,7);
      *(long *)(puVar3 + 0x10) = lVar5;
      *(undefined8 *)(puVar3 + 0x18) = param_3;
      *param_1 = FUN_1002d869c;
      param_1[1] = puVar3;
    }
    _swift_retain(param_3);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

