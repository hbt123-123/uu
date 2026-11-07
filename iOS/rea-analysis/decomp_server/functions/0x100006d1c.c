// rea decompile_all
// name: FUN_100006d1c
// address: 0x100006d1c
// body: available
// range: 0x100006d1c-0x100006df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100006d1c(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 local_40;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::baseline);
  _swift_beginAccess(puVar1,auStack_98,0x21,0);
  uStack_58 = puVar1[5];
  local_60 = puVar1[4];
  uStack_48 = puVar1[7];
  uStack_50 = puVar1[6];
  local_40 = *(undefined2 *)(puVar1 + 8);
  uStack_78 = puVar1[1];
  local_80 = *puVar1;
  uStack_68 = puVar1[3];
  uStack_70 = puVar1[2];
  FUN_10000810c(&local_80);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 2;
  puVar1[7] = 0xf000000000000000;
  puVar1[6] = 0;
  *(undefined2 *)(puVar1 + 8) = 0;
  _swift_endAccess(auStack_98);
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::hasLoggedNonUniqueIdentity) = 0;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::hasLoggedEncodeFailure) = 0;
  FUN_100407cdc(FUN_1000083ac,
                *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::shapeCache),
                PTR___sytN_100995e90 + 8);
  return;
}

