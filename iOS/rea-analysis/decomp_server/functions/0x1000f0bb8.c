// rea decompile_all
// name: FUN_1000f0bb8
// address: 0x1000f0bb8
// body: available
// range: 0x1000f0bb8-0x1000f0dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000f0bb8(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  undefined *puVar9;
  undefined1 *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  ppuVar5 = &local_70;
  ppuVar6 = &local_70;
  ppuVar7 = &local_70;
  ppuVar8 = &local_70;
  puVar4 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 8;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  local_60 = (undefined *)0xd00000000000001d;
  uStack_58 = 0x80000001008893a0;
  local_70 = param_1;
  puStack_68 = (undefined *)param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar3 = PTR___sSSs25LosslessStringConvertiblesWP_100995838;
  puVar2 = PTR___sSSSTsWP_100995820;
  puVar1 = PTR___sSSN_1009957f8;
  puVar9 = PTR___sSSN_1009957f8;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (&local_70,PTR___sSSN_1009957f8,PTR___sSSs25LosslessStringConvertiblesWP_100995838,
             PTR___sSSSTsWP_100995820);
  local_70 = (undefined1 *)ppuVar5;
  puStack_68 = puVar9;
  __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_60,puVar1,puVar2);
  *(undefined1 **)(puVar4 + 0x20) = local_70;
  *(undefined **)(puVar4 + 0x28) = puStack_68;
  local_60 = (undefined *)0xd00000000000001f;
  uStack_58 = 0x80000001008893c0;
  local_70 = param_1;
  puStack_68 = (undefined *)param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar9 = puVar1;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC(&local_70,puVar1,puVar3,puVar2);
  local_70 = (undefined1 *)ppuVar6;
  puStack_68 = puVar9;
  __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_60,puVar1,puVar2);
  *(undefined1 **)(puVar4 + 0x30) = local_70;
  *(undefined **)(puVar4 + 0x38) = puStack_68;
  local_60 = (undefined *)0xd00000000000001f;
  uStack_58 = 0x80000001008893e0;
  local_70 = param_1;
  puStack_68 = (undefined *)param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar9 = puVar1;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC(&local_70,puVar1,puVar3,puVar2);
  local_70 = (undefined1 *)ppuVar7;
  puStack_68 = puVar9;
  __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_60,puVar1,puVar2);
  *(undefined1 **)(puVar4 + 0x40) = local_70;
  *(undefined **)(puVar4 + 0x48) = puStack_68;
  local_60 = (undefined *)0xd000000000000021;
  uStack_58 = 0x8000000100889400;
  local_70 = param_1;
  puStack_68 = (undefined *)param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar9 = puVar1;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC(&local_70,puVar1,puVar3,puVar2);
  local_70 = (undefined1 *)ppuVar8;
  puStack_68 = puVar9;
  __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_60,puVar1,puVar2);
  *(undefined1 **)(puVar4 + 0x50) = local_70;
  *(undefined **)(puVar4 + 0x58) = puStack_68;
  FUN_100401b14(0);
  FUN_1003fbc58(2);
  local_60 = puVar4;
  FUN_10005f920();
  return local_60;
}

