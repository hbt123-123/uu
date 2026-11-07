// rea decompile_all
// name: FUN_1003500bc
// address: 0x1003500bc
// body: available
// range: 0x1003500bc-0x1003502ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003500bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_c0 [12];
  uint local_b4;
  undefined8 local_b0;
  uint local_a4;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  
  puVar6 = (undefined8 *)0x0;
  __s10Foundation12CharacterSetVMa();
  lVar10 = puVar6[-1];
  puVar9 = auStack_c0 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1003509ec();
  lVar7 = _TtC9Alamofire21URLEncodedFormEncoder::allowedCharacters;
  puVar8 = puVar9;
  if (unaff_x21 == 0) {
    if (((uint)param_3 & 0xff) == 2) {
      local_b4 = (uint)*(byte *)(unaff_x20 + 0x10);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
      puVar8 = *(undefined1 **)(unaff_x20 + 0x60);
      local_a0 = *(undefined8 *)(unaff_x20 + 0x68);
      local_b0 = *(undefined8 *)(unaff_x20 + 0x70);
      local_a4 = (uint)*(byte *)(unaff_x20 + 0x88);
      local_98 = param_1;
      local_90 = param_2;
      _swift_beginAccess(unaff_x20 + _TtC9Alamofire21URLEncodedFormEncoder::allowedCharacters,
                         &local_88,0,0);
      (**(code **)(lVar10 + 0x10))(puVar9,unaff_x20 + lVar7,puVar6);
      lVar7 = 0;
      FUN_100350c28();
      _swift_allocObject();
      uVar4 = local_b0;
      *(char *)(lVar7 + 0x10) = (char)local_b4;
      *(undefined1 **)(lVar7 + 0x30) = puVar8;
      *(undefined8 *)(lVar7 + 0x28) = uVar2;
      *(undefined8 *)(lVar7 + 0x20) = uVar3;
      *(undefined8 *)(lVar7 + 0x18) = uVar1;
      *(undefined8 *)(lVar7 + 0x38) = local_a0;
      *(undefined8 *)(lVar7 + 0x40) = local_b0;
      *(char *)(lVar7 + 0x48) = (char)local_a4;
      (**(code **)(lVar10 + 0x20))
                (lVar7 + _TtC9Alamofire24URLEncodedFormSerializer::allowedCharacters,puVar9,puVar6);
      FUN_1002c3c4c(uVar1,uVar3);
      FUN_100351350(uVar2,puVar8);
      _swift_retain(uVar4);
      puVar5 = local_98;
      puVar6 = local_98;
      FUN_100350c3c(local_98);
      _swift_release(lVar7);
      FUN_100350bc0(puVar5,local_90,2);
    }
    else {
      local_70 = 0;
      puStack_68 = (undefined1 *)0xe000000000000000;
      local_78 = (undefined1)param_3;
      local_88 = param_1;
      uStack_80 = param_2;
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&local_88,&local_70,&DAT_1009b4348,PTR___ss26DefaultStringInterpolationVN_100995bf0
                 ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      FUN_100350bc0(param_1,param_2,param_3);
      puVar8 = puStack_68;
      uVar1 = local_70;
      FUN_100350be8();
      puVar6 = (undefined8 *)&DAT_1009b4200;
      _swift_allocError(&DAT_1009b4200,param_1,0,0);
      *param_1 = uVar1;
      param_1[1] = puVar8;
      _swift_willThrow();
    }
  }
  auVar11._8_8_ = puVar8;
  auVar11._0_8_ = puVar6;
  return auVar11;
}

