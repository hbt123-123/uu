// rea decompile_all
// name: FUN_10011e468
// address: 0x10011e468
// body: available
// range: 0x10011e468-0x10011e58b inclusive
// range: 0x10011e9cc-0x10011ea63 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011e468(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  undefined1 auStack_620 [16];
  long alStack_610 [8];
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  long local_5b8;
  long local_5b0;
  long lStack_5a8;
  undefined4 local_5a0;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  
  lStack_98 = param_5[9];
  local_a0 = param_5[8];
  lStack_88 = param_5[0xb];
  lStack_90 = param_5[10];
  lStack_78 = param_5[0xd];
  local_80 = param_5[0xc];
  lStack_d8 = param_5[1];
  local_e0 = *param_5;
  lStack_c8 = param_5[3];
  lStack_d0 = param_5[2];
  lStack_b8 = param_5[5];
  local_c0 = param_5[4];
  lStack_a8 = param_5[7];
  lStack_b0 = param_5[6];
  lVar1 = 0;
  local_5d0 = param_2;
  local_5c8 = param_3;
  uStack_5c0 = param_4;
  local_5a0 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_5b0 = *(long *)(lVar1 + -8);
  lStack_5a8 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_5b0 + 0x40));
  lVar1 = 0;
  __s8Dispatch0A3QoSVMa();
  local_5b8 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = ((-0x600 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *param_5;
  if ((*(byte *)(param_5 + 1) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010011e588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_10011e58c + (ulong)*(ushort *)(&DAT_10080e250 + lVar2 * 2) * 4))();
    return;
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(long *)((long)alStack_610 + lVar1 + 0x600) = lVar2;
  FUN_1003fb4ec(FUN_1001219c0,auStack_620 + lVar1 + 0x600,0xd00000000000009f,0x800000010088d5c0,
                0xd00000000000002c,0x800000010088d690,0x111,0);
  return;
}

