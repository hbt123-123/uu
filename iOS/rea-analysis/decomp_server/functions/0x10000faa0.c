// rea decompile_all
// name: FUN_10000faa0
// address: 0x10000faa0
// body: available
// range: 0x10000faa0-0x10001013f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10000faa0(uint param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if ((param_1 & 1) != 0) {
    puVar2 = (undefined *)0x0;
    FUN_100033898(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
    uVar1 = *(ulong *)(puVar2 + 0x10);
    puVar5 = puVar2;
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar2 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar2);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0xbce5aebde78d85e9;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xac0000008ba7e580;
  }
  if ((param_1 >> 1 & 1) != 0) {
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0xa7e7aebde78dbde4;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xac000000a88ae5bb;
  }
  if ((param_1 >> 2 & 1) != 0) {
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0xb8e4bab8e4beaee8;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xac000000be98e6bb;
  }
  if ((param_1 >> 3 & 1) != 0) {
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0x8ee7a8bee88688e5;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xaf968ce5988fe587;
  }
  if ((param_1 >> 4 & 1) != 0) {
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0x98e6a08ae5bbb7e6;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xafa899e5baa4e7be;
  }
  if ((param_1 >> 5 & 1) != 0) {
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0x98e6a499e9bba7e7;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xafa899e5baa4e7be;
  }
  if ((param_1 >> 8 & 1) != 0) {
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0x98e6a894e7af90e5;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xafa899e5baa4e7be;
  }
  if ((param_1 >> 9 & 1) != 0) {
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0x98e6a894e781a6e7;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xafa899e5baa4e7be;
  }
  if ((param_1 >> 10 & 1) == 0) {
    if ((param_1 >> 0xb & 1) != 0) goto LAB_10000fd98;
LAB_10000fd2c:
    if ((param_1 >> 0xc & 1) != 0) goto LAB_10000fdd4;
LAB_10000fd30:
    if (*(long *)(puVar5 + 0x10) == 0) {
      _swift_bridgeObjectRelease(puVar5);
      uVar6 = 0xa900000000000096;
      uVar7 = 0x8ce5988fe5a097e6;
      goto LAB_10000fe80;
    }
  }
  else {
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0x95e98ba7e580bce5;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xac0000008f83e59c;
    if ((param_1 >> 0xb & 1) == 0) goto LAB_10000fd2c;
LAB_10000fd98:
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0x95e9a2ade69c81e5;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xac0000008f83e59c;
    if ((param_1 >> 0xc & 1) == 0) goto LAB_10000fd30;
LAB_10000fdd4:
    puVar2 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100033898(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100033898(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = 0x8fe59788e5928ee6;
    *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = 0xac000000968ce598;
  }
  puVar2 = &DAT_100a756e8;
  FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
  puVar3 = &DAT_100a756f0;
  FUN_10003f840(&DAT_100a756f0,&DAT_100a756e8,&BYTE_100809720,PTR___sSayxGSKsMc_100995888);
  uVar7 = 0x202c;
  uVar6 = 0xe200000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,puVar2,puVar3);
  _swift_bridgeObjectRelease(puVar5);
LAB_10000fe80:
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar7;
  return auVar8;
}

