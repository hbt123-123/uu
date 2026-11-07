// rea decompile_all
// name: FUN_1000f7bec
// address: 0x1000f7bec
// body: available
// range: 0x1000f7bec-0x1000f7d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f7bec(undefined8 *param_1,undefined8 *param_2,ulong param_3,char *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x2d);
  __sSS6appendyySSF(0xd000000000000016,0x800000010088a1e0);
  local_70 = *param_2;
  local_68 = *(undefined1 *)(param_2 + 1);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_60,&DAT_1009c3680,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x3d6e4f6e72757420,0xe800000000000000);
  bVar3 = (param_3 & 1) == 0;
  uVar2 = 0x65757274;
  if (bVar3) {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x7373656363757320,0xe90000000000003d);
  uVar2 = 0x65757274;
  if (*param_4 == '\0') {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (*param_4 == '\0') {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

