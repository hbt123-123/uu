// rea decompile_all
// name: FUN_10010d488
// address: 0x10010d488
// body: available
// range: 0x10010d488-0x10010d6c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010d488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar1 = param_1;
  uVar2 = param_2;
  FUN_1004359b0();
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  *(byte *)(unaff_x20 + 0x48) = (byte)uVar2 & 1;
  *(undefined1 *)(unaff_x20 + 0x49) = 0;
  uVar1 = param_1;
  uVar2 = param_2;
  FUN_100435e24(param_1,param_2,param_3);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar1;
  *(byte *)(unaff_x20 + 0x70) = (byte)uVar2 & 1;
  *(undefined1 *)(unaff_x20 + 0x71) = 0;
  FUN_100401b14(0);
  local_a0 = param_1;
  uStack_98 = param_2;
  local_90 = param_3;
  FUN_1003fb48c(FUN_100112e74,auStack_b0,0xd0000000000000ac,0x800000010088b950,0xd000000000000022,
                0x800000010088c2f0,0x128,0);
  uVar1 = param_1;
  uVar2 = param_2;
  FUN_10043654c(param_1,param_2,param_3);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar2;
  _swift_bridgeObjectRelease(uVar5);
  uVar4 = 0x800000010088b950;
  local_d0 = param_1;
  uStack_c8 = param_2;
  local_c0 = param_3;
  FUN_1003fb48c(FUN_100112e80,auStack_e0,0xd0000000000000ac,0x800000010088b950,0xd000000000000022,
                0x800000010088c2f0,0x12a,0);
  uVar1 = param_1;
  uVar2 = param_2;
  FUN_100435bb4(param_1,param_2,param_3);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  _swift_bridgeObjectRelease(uVar5);
  FUN_100435bb4(param_1,param_2,param_3);
  uVar2 = 4;
  uVar1 = param_2;
  FUN_100075d40(4,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  local_70 = 0x2a2a2a;
  uStack_68 = 0xe300000000000000;
  uVar5 = uVar4;
  __sSS14_fromSubstringySSSshFZ(uVar2,param_1,uVar1);
  _swift_bridgeObjectRelease(uVar4);
  puVar3 = PTR___sSSSTsWP_100995820;
  local_80 = uVar2;
  uStack_78 = param_1;
  __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_70,PTR___sSSN_1009957f8);
  uVar1 = local_80;
  uVar2 = uStack_78;
  __sSsySsSScfC();
  local_100 = uVar1;
  uStack_f8 = uVar2;
  local_f0 = puVar3;
  uStack_e8 = uVar5;
  FUN_1003fb48c(FUN_100112e8c,auStack_110,0xd0000000000000ac,0x800000010088b950,0xd000000000000022,
                0x800000010088c2f0,0x12d,0);
  _swift_bridgeObjectRelease(uVar5);
  return;
}

