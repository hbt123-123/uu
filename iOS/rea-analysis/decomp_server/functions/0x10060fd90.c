// rea decompile_all
// name: FUN_10060fd90
// address: 0x10060fd90
// body: available
// range: 0x10060fd90-0x10060ffc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10060fd90(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [32];
  long local_50;
  long lStack_48;
  long local_40;
  long local_38;
  long local_30;
  char local_28;
  
  FUN_10060ffc8();
  if (local_28 == '\0') {
    FUN_10007f3d4(&local_50,auStack_70);
    local_80 = 0;
    uStack_78 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x1b);
    pcVar1 = "Could not `flatMap<";
    puVar2 = &DAT_d000000000000013;
  }
  else {
    if (local_28 != '\x01') {
      if (((local_38 == 0 && local_30 == 0) && (local_50 == 0 && local_40 == 0)) && lStack_48 == 0)
      {
        uVar4 = 0x80000001008beef0;
        uVar3 = 0xd00000000000004c;
      }
      else if ((local_50 == 1) &&
              (((local_38 == 0 && local_30 == 0) && local_40 == 0) && lStack_48 == 0)) {
        uVar4 = 0x80000001008beec0;
        uVar3 = 0xd000000000000021;
      }
      else if ((local_50 == 2) &&
              (((local_38 == 0 && local_30 == 0) && local_40 == 0) && lStack_48 == 0)) {
        uVar4 = 0x80000001008bee90;
        uVar3 = 0xd00000000000002f;
      }
      else if ((local_50 == 3) &&
              (((local_38 == 0 && local_30 == 0) && local_40 == 0) && lStack_48 == 0)) {
        uVar4 = 0x80000001008bee60;
        uVar3 = 0xd000000000000027;
      }
      else if ((local_50 == 4) &&
              (((local_38 == 0 && local_30 == 0) && local_40 == 0) && lStack_48 == 0)) {
        uVar4 = 0x80000001008bee20;
        uVar3 = 0xd00000000000003d;
      }
      else {
        uVar4 = 0x80000001008bede0;
        uVar3 = 0xd000000000000036;
      }
      goto LAB_10060fec0;
    }
    FUN_10007f3d4(&local_50,auStack_70);
    local_80 = 0;
    uStack_78 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x1e);
    pcVar1 = "Could not `compactMap<";
    puVar2 = (undefined1 *)0xd000000000000016;
  }
  __sSS6appendyySSF(puVar2,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF(local_30,0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x203a603e,0xe400000000000000);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (auStack_70,&local_80,PTR___sypN_100995e88 + 8,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  uVar4 = uStack_78;
  uVar3 = local_80;
  FUN_10003f094(auStack_70);
LAB_10060fec0:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}

