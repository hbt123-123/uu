// rea decompile_all
// name: FUN_100127398
// address: 0x100127398
// body: available
// range: 0x100127398-0x100127657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100127398(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  long local_98;
  undefined8 local_90;
  code *local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  
  puVar4 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_a0 + -extraout_x8;
  puVar4 = &DAT_100a79890;
  FUN_100004bb4(&DAT_100a79890,&DAT_10080e600);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar8 - extraout_x8_00;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_100127658,0,0xd0000000000000a9,0x800000010088e440,0xd000000000000021,
                  0x800000010088e4f0,0x1d,0);
  }
  else {
    FUN_100040bb4();
    lVar5 = 0;
    __s10Foundation4UUIDVMa();
    local_88 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
    local_78 = param_1;
    (*local_88)();
    lVar6 = 0;
    FUN_100127240();
    local_80 = (long)*(int *)(lVar6 + 0x14);
    local_70 = param_4;
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + local_80));
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar6 + 0x18));
    local_90 = param_3;
    _swift_bridgeObjectRelease(puVar1[1]);
    puVar2 = (undefined4 *)(unaff_x20 + *(int *)(lVar6 + 0x1c));
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 1;
    lVar11 = (long)*(int *)(lVar6 + 0x24);
    FUN_100040bb4(unaff_x20 + lVar11,&DAT_100a76718,&DAT_10080ccc0);
    lVar7 = 0;
    __s10Foundation4DateVMa();
    pcVar10 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
    local_68 = lVar9;
    (*pcVar10)(unaff_x20 + lVar11,1,1,lVar7);
    local_98 = (long)*(int *)(lVar6 + 0x2c);
    __s10Foundation4UUIDVACycfC(lVar12);
    (*local_88)(lVar12,0,1,lVar5);
    FUN_100128b30(lVar12);
    uVar3 = local_90;
    *(long *)(unaff_x20 + local_80) = local_78;
    *puVar1 = param_2;
    puVar1[1] = local_90;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    __s10Foundation4DateV18addingTimeIntervalyACSdF(puVar8,0x403e000000000000);
    (*pcVar10)(puVar8,0,1,lVar7);
    lVar9 = local_68;
    FUN_100128b30(puVar8,unaff_x20 + lVar11,&DAT_100a76718,&DAT_10080ccc0);
    *(undefined1 *)(unaff_x20 + local_98) = 0;
  }
  return lVar9 != 0;
}

