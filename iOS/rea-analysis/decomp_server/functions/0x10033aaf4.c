// rea decompile_all
// name: FUN_10033aaf4
// address: 0x10033aaf4
// body: available
// range: 0x10033aaf4-0x10033abaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033aaf4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 local_38;
  
  local_38 = 0;
  _swift_stdlib_random(&local_38,8);
  uVar3 = local_38;
  local_38 = 0;
  _swift_stdlib_random(&local_38,8);
  uVar4 = local_38;
  puVar5 = &DAT_100a86b10;
  FUN_100004bb4(&DAT_100a86b10,&DAT_10081ac10);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  puVar2 = PTR___ss6UInt32Vs7CVarArgsWP_100995e00;
  puVar1 = PTR___ss6UInt32VN_100995dc0;
  *(undefined **)(puVar5 + 0x38) = PTR___ss6UInt32VN_100995dc0;
  *(undefined **)(puVar5 + 0x40) = puVar2;
  *(int *)(puVar5 + 0x20) = (int)uVar3;
  *(undefined **)(puVar5 + 0x60) = puVar1;
  *(undefined **)(puVar5 + 0x68) = puVar2;
  *(int *)(puVar5 + 0x48) = (int)uVar4;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0xd00000000000001b,0x80000001008ab1f0,puVar5);
  return;
}

