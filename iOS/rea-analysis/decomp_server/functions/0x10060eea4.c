// rea decompile_all
// name: FUN_10060eea4
// address: 0x10060eea4
// body: available
// range: 0x10060eea4-0x10060f0ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10060eff8 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060eea4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_1 == 0) {
    puVar1 = &DAT_100ab0328;
    FUN_100004bb4(&DAT_100ab0328,&DAT_100848628);
    _swift_allocObject();
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    uVar3 = 0x80000001008bed80;
    *(undefined **)(puVar1 + 0x38) = PTR___sSSN_1009957f8;
    puVar4 = (undefined1 *)0xd000000000000034;
  }
  else if (param_1 == 1) {
    puVar1 = &DAT_100ab0328;
    FUN_100004bb4(&DAT_100ab0328,&DAT_100848628);
    _swift_allocObject();
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    uVar3 = 0x80000001008bed40;
    *(undefined **)(puVar1 + 0x38) = PTR___sSSN_1009957f8;
    puVar4 = &DAT_d000000000000030;
  }
  else {
    if (param_1 != 2) {
      puVar1 = &DAT_100ab0328;
      FUN_100004bb4(&DAT_100ab0328,&DAT_100848628);
      _swift_allocObject();
      *(undefined8 *)(puVar1 + 0x18) = 2;
      *(undefined8 *)(puVar1 + 0x10) = 1;
      local_40 = 0;
      uStack_38 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x1f);
      __sSS6appendyySSF(0xd00000000000001d,0x80000001008bece0);
      puVar2 = &DAT_100aaffb8;
      local_48 = param_1;
      FUN_100004bb4(&DAT_100aaffb8,&DAT_100848630);
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&local_48,&local_40,puVar2,PTR___ss26DefaultStringInterpolationVN_100995bf0,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      *(undefined **)(puVar1 + 0x38) = PTR___sSSN_1009957f8;
      *(undefined8 *)(puVar1 + 0x20) = local_40;
      *(undefined8 *)(puVar1 + 0x28) = uStack_38;
      __ss5print_9separator10terminatoryypd_S2StF
                (puVar1,0x20,0xe100000000000000,10,0xe100000000000000);
      _swift_bridgeObjectRelease(puVar1);
      return;
    }
    puVar1 = &DAT_100ab0328;
    FUN_100004bb4(&DAT_100ab0328,&DAT_100848628);
    _swift_allocObject();
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    uVar3 = 0x80000001008bed00;
    *(undefined **)(puVar1 + 0x38) = PTR___sSSN_1009957f8;
    puVar4 = (undefined1 *)0xd000000000000032;
  }
  *(undefined1 **)(puVar1 + 0x20) = puVar4;
  *(undefined8 *)(puVar1 + 0x28) = uVar3;
  __ss5print_9separator10terminatoryypd_S2StF();
  _swift_bridgeObjectRelease(puVar1);
  return;
}

