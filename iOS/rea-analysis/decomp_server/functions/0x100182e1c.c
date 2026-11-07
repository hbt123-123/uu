// rea decompile_all
// name: FUN_100182e1c
// address: 0x100182e1c
// body: available
// range: 0x100182e1c-0x100183147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100182e1c(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *unaff_x20;
  undefined1 auStack_2e0 [624];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar3 = &DAT_100a7b970;
  FUN_100004bb4(&DAT_100a7b970,&DAT_100812a90);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 0x18;
  *(undefined8 *)(puVar3 + 0x10) = 0xc;
  *(undefined8 *)(puVar3 + 0x20) = 0x6f69746365726964;
  puVar5 = PTR___sSSN_1009957f8;
  uVar7 = 0x646e6573;
  if (*unaff_x20 == '\0') {
    uVar7 = 0x65766965636572;
  }
  uVar6 = 0xe700000000000000;
  uVar1 = 0xe400000000000000;
  if (*unaff_x20 == '\0') {
    uVar1 = 0xe700000000000000;
  }
  *(undefined8 *)(puVar3 + 0x28) = 0xe90000000000006e;
  *(undefined8 *)(puVar3 + 0x30) = uVar7;
  *(undefined8 *)(puVar3 + 0x38) = uVar1;
  *(undefined **)(puVar3 + 0x48) = puVar5;
  *(undefined8 *)(puVar3 + 0x50) = 0x746c75736572;
  *(undefined8 *)(puVar3 + 0x58) = 0xe600000000000000;
  if (unaff_x20[1] == '\0') {
    uVar7 = 0x73736563637573;
  }
  else if (unaff_x20[1] == '\x01') {
    uVar6 = 0xee006572756c6961;
    uVar7 = 0x466c616974726170;
  }
  else {
    uVar7 = 0x6572756c696166;
  }
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x10);
  local_40 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(puVar3 + 0x98) = uStack_38;
  *(undefined8 *)(puVar3 + 0x90) = local_40;
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x20);
  local_50 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(puVar3 + 200) = uStack_48;
  *(undefined8 *)(puVar3 + 0xc0) = local_50;
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
  local_60 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x48);
  local_70 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(puVar3 + 0x128) = uStack_58;
  *(undefined8 *)(puVar3 + 0x120) = local_60;
  *(undefined8 *)(puVar3 + 0x60) = uVar7;
  *(undefined8 *)(puVar3 + 0x68) = uVar6;
  *(undefined **)(puVar3 + 0x78) = puVar5;
  *(undefined8 *)(puVar3 + 0x80) = 0x6976654472656570;
  *(undefined8 *)(puVar3 + 0x88) = 0xec00000064496563;
  *(undefined **)(puVar3 + 0xa8) = puVar5;
  *(undefined8 *)(puVar3 + 0xb0) = 0x6976654472656570;
  *(undefined8 *)(puVar3 + 0xb8) = 0xee00656d614e6563;
  *(undefined **)(puVar3 + 0xd8) = puVar5;
  *(undefined8 *)(puVar3 + 0xe0) = 0x64496b736174;
  *(undefined8 *)(puVar3 + 0xe8) = 0xe600000000000000;
  puVar4 = PTR___ss5Int32VN_100995c78;
  *(undefined4 *)(puVar3 + 0xf0) = *(undefined4 *)(unaff_x20 + 0x28);
  *(undefined **)(puVar3 + 0x108) = puVar4;
  *(undefined8 *)(puVar3 + 0x110) = 0x656d614e6b736174;
  *(undefined8 *)(puVar3 + 0x118) = 0xe800000000000000;
  *(undefined **)(puVar3 + 0x138) = puVar5;
  *(undefined1 **)(puVar3 + 0x140) = &DAT_d000000000000010;
  *(undefined8 *)(puVar3 + 0x148) = 0x80000001008975b0;
  *(undefined8 *)(puVar3 + 0x158) = uStack_68;
  *(undefined8 *)(puVar3 + 0x150) = local_70;
  *(undefined **)(puVar3 + 0x168) = puVar5;
  *(undefined8 *)(puVar3 + 0x170) = 0x4373736563637573;
  puVar4 = PTR___sSiN_100995968;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(puVar3 + 0x178) = 0xec000000746e756f;
  *(undefined8 *)(puVar3 + 0x180) = uVar7;
  *(undefined **)(puVar3 + 0x198) = puVar4;
  *(undefined8 *)(puVar3 + 0x1a0) = 0x436572756c696166;
  *(undefined8 *)(puVar3 + 0x1a8) = 0xec000000746e756f;
  *(undefined8 *)(puVar3 + 0x1b0) = uVar1;
  *(undefined **)(puVar3 + 0x1c8) = puVar4;
  *(undefined8 *)(puVar3 + 0x1d0) = 0x6143726573557369;
  *(undefined8 *)(puVar3 + 0x1d8) = 0xef64656c6c65636e;
  puVar5 = PTR___sSbN_1009958c8;
  puVar3[0x1e0] = unaff_x20[0x60];
  *(undefined **)(puVar3 + 0x1f8) = puVar5;
  *(undefined8 *)(puVar3 + 0x200) = 0xd000000000000011;
  *(undefined8 *)(puVar3 + 0x208) = 0x80000001008975d0;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined **)(puVar3 + 0x228) = puVar4;
  *(undefined8 *)(puVar3 + 0x210) = uVar7;
  *(undefined8 *)(puVar3 + 0x230) = 0xd000000000000012;
  *(undefined8 *)(puVar3 + 0x238) = 0x80000001008975f0;
  cVar2 = unaff_x20[0x70];
  *(undefined **)(puVar3 + 600) = puVar5;
  puVar3[0x240] = cVar2;
  FUN_100102fb4(&local_40,auStack_2e0);
  FUN_100102fb4(&local_50,auStack_2e0);
  FUN_100102fb4(&local_60,auStack_2e0);
  FUN_100102fb4(&local_70,auStack_2e0);
  puVar4 = puVar3;
  FUN_1000cc648(puVar3);
  _swift_setDeallocating(puVar3);
  puVar5 = &DAT_100a775a0;
  FUN_100004bb4(&DAT_100a775a0,&DAT_10080c1c0);
  _swift_arrayDestroy(puVar3 + 0x20,0xc,puVar5);
  return puVar4;
}

