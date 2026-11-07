// rea decompile_all
// name: FUN_1000be0a8
// address: 0x1000be0a8
// body: available
// range: 0x1000be0a8-0x1000be2b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000be0a8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 auVar13 [16];
  long local_68;
  
  puVar9 = PTR___ss5UInt8VN_100995d40;
  lVar6 = 0x10;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (0x10,PTR___ss5UInt8VN_100995d40);
  *(undefined8 *)(lVar6 + 0x10) = 0x10;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  local_68 = lVar6;
  FUN_100008184(param_1,param_2);
  FUN_100099f9c(param_1,param_2,param_1,param_2,&local_68);
  lVar5 = local_68;
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar6 = *(long *)(local_68 + 0x10);
  if (lVar6 != 0) {
    FUN_10006fae0(0,lVar6,0);
    puVar3 = PTR___ss5UInt8Vs7CVarArgsWP_100995d68;
    puVar12 = (undefined1 *)(lVar5 + 0x20);
    do {
      uVar2 = *puVar12;
      puVar7 = &DAT_100a766e8;
      FUN_100004bb4(&DAT_100a766e8,&DAT_10080b1e0);
      _swift_allocObject();
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      *(undefined **)(puVar7 + 0x38) = puVar9;
      *(undefined **)(puVar7 + 0x40) = puVar3;
      puVar7[0x20] = uVar2;
      uVar8 = 0x78323025;
      uVar11 = 0xe400000000000000;
      __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x78323025,0xe400000000000000,puVar7);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_10006fae0(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = uVar8;
      *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x28) = uVar11;
      lVar6 = lVar6 + -1;
      puVar12 = puVar12 + 1;
    } while (lVar6 != 0);
  }
  puVar9 = &DAT_100a756e8;
  FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
  puVar10 = &DAT_100a756f0;
  FUN_10003f840(&DAT_100a756f0,&DAT_100a756e8,&BYTE_100809720,PTR___sSayxGSKsMc_100995888);
  uVar8 = 0;
  uVar11 = 0xe000000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,puVar9,puVar10);
  _swift_bridgeObjectRelease(lVar5);
  _swift_bridgeObjectRelease(puVar4);
  auVar13._8_8_ = uVar11;
  auVar13._0_8_ = uVar8;
  return auVar13;
}

